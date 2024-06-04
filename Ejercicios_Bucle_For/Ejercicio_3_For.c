// 3. Potencia mediante sumas sucesivas //
#include <stdio.h>
int main()
{
    int base, exponente, resultado = 1;
    printf("Ingrese la base => ");
    scanf("%d", &base);
    printf("Ingrese el exponente=> ");
    scanf("%d", &exponente);
    printf("====================================================\n");
    printf("%d^%d = ", base, exponente);
    for (int i = 1; i <= exponente; i++)
    {
        printf("%d", base);
        if (i < exponente)
        {
            printf(" * ");
        }

        resultado *= base;
    }
    printf(" = %d", resultado);
    return 0;
}