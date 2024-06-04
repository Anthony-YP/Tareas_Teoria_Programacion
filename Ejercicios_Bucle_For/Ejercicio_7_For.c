// 7. Suma de una serie aritmética //

#include <stdio.h>
int main()
{
    int n, suma = 0;
    printf("Suma aritmetica\n");
    printf("Ingrese un numero\n");
    scanf("%d", &n);
    printf("serie aritmetica = ");
    for (int i = 1; i <= n; i++)
    {
        printf("%d", i);
        suma += i;
        if (i < n)
        {
            printf(" + ");
        }
    }
    printf(" = %d", suma);
    return 0;
}