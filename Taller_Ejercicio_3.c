#include <stdio.h>

// For
int potenciaFor(int base, int exponente)
{
    int resultado = 1;
    for (int i = 0; i < exponente; i++)
    {
        resultado *= base;
    }
    return resultado;
}

// While
int potenciaWhile(int base, int exponente)
{
    int resultado = 1;
    int i = 0;
    while (i < exponente)
    {
        resultado *= base;
        i++;
    }
    return resultado;
}

// Do While
int potenciaDoWhile(int base, int exponente)
{
    int resultado = 1;
    int i = 0;
    if (exponente == 0)
        return 1; // Caso especial cuando el exponente es 0
    do
    {
        resultado *= base;
        i++;
    } while (i < exponente);
    return resultado;
}

int main()
{
    int base, exponente;

    printf("Ingrese la base: ");
    scanf("%d", &base);

    printf("Ingrese el exponente: ");
    scanf("%d", &exponente);

    int resultadoFor = potenciaFor(base, exponente);
    printf("Resultado usando for =>  %d\n", resultadoFor);

    int resultadoWhile = potenciaWhile(base, exponente);
    printf("Resultado usando while =>  %d\n", resultadoWhile);

    int resultadoDoWhile = potenciaDoWhile(base, exponente);
    printf("Resultado usando do while: =>%d\n", resultadoDoWhile);

    return 0;
}
