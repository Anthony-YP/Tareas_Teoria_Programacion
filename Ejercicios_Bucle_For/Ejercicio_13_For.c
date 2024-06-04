#include <stdio.h>

// 13. Sumar los números pares hasta n //

int main()
{
    int numero, respuesta;
    printf("- Ingrese el limite de numeros => ");
    scanf("%d", &numero);
    printf("====================================================\n");

    // For //
    printf(" ----- Resultado con bucle For -----\n");
    for (int i = 1; i <= numero; i++)
    {
        if (i % 2 == 0)
        {
            respuesta += i;
            printf(" %d +", i);
        }
    }
    printf("\nLa suma de todos los numero pares es => %d", respuesta);
    return 0;
}