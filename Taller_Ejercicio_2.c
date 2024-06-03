#include <stdio.h>
#include <string.h>
// 2. Inverso de un número //

int main()
{
    // For //
    int longitud, contador;
    char listnumero[100];
    printf("- Ingrese un número = > ");
    scanf("%s", &listnumero);
    printf("====================================================\n");
    longitud = strlen(listnumero);

    // For //
    printf(" ----- Resultado con bucle For -----\n");
    printf("El inverso del número ingresado es => ");
    for (int i = longitud; i >= 0; i--)
    {
        printf("%c", listnumero[i]);
    }
    printf("\n====================================================\n");

    // While //
    printf(" ----- Resultado con bucle While -----\n");
    contador = longitud;
    printf("El inverso del número ingresado es => ");
    while (contador >= 0)
    {
        printf("%c", listnumero[contador]);
        contador--;
    }
    printf("\n====================================================\n");

    // Do While //
    printf(" ----- Resultado con bucle Do While -----\n");
    contador = longitud;
    printf("El inverso del número ingresado es => ");
    do
    {
        printf("%c", listnumero[contador]);

        contador--;
    } while (contador >= 0);

    return 0;
}
