// 7. Suma de una serie aritmética //
#include <stdio.h>

int main()
{
    int n, suma = 0;
    int i = 1; // Inicializamos la variable de control del ciclo while

    printf("Suma aritmetica\n");
    printf("Ingrese un numero: ");
    scanf("%d", &n);
    printf("serie aritmetica = ");
    while (i <= n)
    {
        printf("%d", i);
        suma += i;
        if (i < n)
        {
            printf(" + ");
        }

        i++;
    }
    printf(" = %d", suma);

    return 0;
}