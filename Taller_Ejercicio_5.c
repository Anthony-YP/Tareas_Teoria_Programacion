#include <stdio.h>

// For
void fibonacciFor(int limite)
{
    int a = 0, b = 1, siguiente;
    printf("Serie de Fibonacci usando for:\n");
    for (int i = 0; i < limite; i++)
    {
        if (i <= 1)
        {
            siguiente = i;
        }
        else
        {
            siguiente = a + b;
            a = b;
            b = siguiente;
        }
        printf("%d ", siguiente);
    }
    printf("\n");
}

// While
void fibonacciWhile(int limite)
{
    int a = 0, b = 1, siguiente;
    int i = 0;
    printf("Serie de Fibonacci usando while:\n");
    while (i < limite)
    {
        if (i <= 1)
        {
            siguiente = i;
        }
        else
        {
            siguiente = a + b;
            a = b;
            b = siguiente;
        }
        printf("%d ", siguiente);
        i++;
    }
    printf("\n");
}

// Do While
void fibonacciDoWhile(int limite)
{
    int a = 0, b = 1, siguiente;
    int i = 0;
    printf("Serie de Fibonacci usando do while:\n");
    do
    {
        if (i <= 1)
        {
            siguiente = i;
        }
        else
        {
            siguiente = a + b;
            a = b;
            b = siguiente;
        }
        printf("%d ", siguiente);
        i++;
    } while (i < limite);
    printf("\n");
}

int main()
{
    int limite;

    printf("Ingrese el número límite para la serie de Fibonacci => ");
    scanf("%d", &limite);

    fibonacciFor(limite);

    fibonacciWhile(limite);

    fibonacciDoWhile(limite);

    return 0;
}
