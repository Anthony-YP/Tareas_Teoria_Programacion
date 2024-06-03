#include <stdio.h>

// For
unsigned long long factorialFor(int numero)
{
    unsigned long long resultado = 1;
    for (int i = 1; i <= numero; i++)
    {
        resultado *= i;
    }
    return resultado;
}

// While
unsigned long long factorialWhile(int numero)
{
    unsigned long long resultado = 1;
    int i = 1;
    while (i <= numero)
    {
        resultado *= i;
        i++;
    }
    return resultado;
}

// Do While
unsigned long long factorialDoWhile(int numero)
{
    unsigned long long resultado = 1;
    int i = 1;
    if (numero == 0)
        return 1; // Caso especial cuando el número es 0
    do
    {
        resultado *= i;
        i++;
    } while (i <= numero);
    return resultado;
}

int main()
{
    int numero;

    printf("Ingrese un número para calcular su factorial: ");
    scanf("%d", &numero);

    unsigned long long resultadoFor = factorialFor(numero);
    printf("Factorial de %d usando for => %llu\n", numero, resultadoFor);

    unsigned long long resultadoWhile = factorialWhile(numero);
    printf("Factorial de %d usando while =>  %llu\n", numero, resultadoWhile);

    // Calculando usando do while
    unsigned long long resultadoDoWhile = factorialDoWhile(numero);
    printf("Factorial de %d usando do while => %llu\n", numero, resultadoDoWhile);

    return 0;
}
