#include <stdio.h>
#include <math.h>

// For
double raizFor(double numero, int indice)
{
    double x = numero; // Valor inicial
    for (int i = 0; i < 100; i++)
    {
        x = (1.0 / indice) * ((indice - 1) * x + numero / pow(x, indice - 1));
    }
    return x;
}

// While
double raizWhile(double numero, int indice)
{
    double x = numero; // Valor inicial
    int i = 0;
    while (i < 100)
    {
        x = (1.0 / indice) * ((indice - 1) * x + numero / pow(x, indice - 1));
        i++;
    }
    return x;
}

// Do While
double raizDoWhile(double numero, int indice)
{
    double x = numero; // Valor inicial
    int i = 0;
    do
    {
        x = (1.0 / indice) * ((indice - 1) * x + numero / pow(x, indice - 1));
        i++;
    } while (i < 100);
    return x;
}

int main()
{
    double numero;
    int indice;

    printf("Ingrese el número: ");
    scanf("%lf", &numero);

    printf("Ingrese el índice de la raíz: ");
    scanf("%d", &indice);

    double resultadoFor = raizFor(numero, indice);
    printf("Resultado usando for: %lf\n", resultadoFor);

    double resultadoWhile = raizWhile(numero, indice);
    printf("Resultado usando while: %lf\n", resultadoWhile);

    double resultadoDoWhile = raizDoWhile(numero, indice);
    printf("Resultado usando do while: %lf\n", resultadoDoWhile);

    return 0;
}
