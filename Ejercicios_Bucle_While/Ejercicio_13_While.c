#include <stdio.h>

// 13. Sumar los números pares hasta n //

int main()
{
    int numero, respuesta, contador;
    printf("- Ingrese el limite de numeros => ");
    scanf("%d", &numero);
    printf("====================================================\n");

    // While //
    printf(" ----- Resultado con bucle For -----\n");
    contador = 1;
    while (contador <= numero)
    {
        if (contador % 2 == 0)
        {
            respuesta += contador;
            printf(" %d +", contador);
        }
        contador++;
    }
    printf("\nLa suma de todos los numero impares es => %d", respuesta);
    return 0;
}