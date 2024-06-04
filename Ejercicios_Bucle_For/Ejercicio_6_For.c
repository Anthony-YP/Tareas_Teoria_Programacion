// 6. Factorial de un número //

#include <stdio.h>
int main()
{
    int n, resultado = 1;
    printf("Ingrese un numero\n");
    scanf("%d", &n);
    printf("%d! = ", n);
    for (int i = n; i >= 1; i--)
    {
        printf("%d", i);
        if (i > 1)
        {
            printf(" * ");
        }
        resultado *= i;
    }
    printf(" = %d", resultado);
    return 0;
}