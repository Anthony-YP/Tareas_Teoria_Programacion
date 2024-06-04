// 6. Factorial de un número //

#include <stdio.h>

int main()
{
    int n, resultado = 1;

    printf("Ingrese un numero: ");
    scanf("%d", &n);

    printf("%d! = ", n);

    int i = n;
    do
    {
        printf("%d", i);
        if (i > 1)
        {
            printf(" * ");
        }
        resultado *= i;
        i--;
    } while (i >= 1);
    printf(" = %d", resultado);

    return 0;
}