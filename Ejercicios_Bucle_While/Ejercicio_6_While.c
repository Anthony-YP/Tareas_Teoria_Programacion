// 6. Factorial de un número //

#include <stdio.h>

int main()
{
    int n, resultado = 1;

    printf("Ingrese un numero: ");
    scanf("%d", &n);

    printf("%d! = ", n);

    int i = n;
    while (i >= 1)
    {
        printf("%d", i);
        if (i > 1)
        {
            printf(" * ");
        }
        resultado *= i;
        i--;
    }

    printf(" = %d", resultado);

    return 0;
}