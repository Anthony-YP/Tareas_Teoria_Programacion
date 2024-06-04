#include <stdio.h>
#include <string.h>
// 2. Inverso de un número //

int main()
{
    int longitud, contador;
    char listnumero[100];
    printf("- Ingrese un número = > ");
    scanf("%s", &listnumero);
    printf("====================================================\n");
    longitud = strlen(listnumero);
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