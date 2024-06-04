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
    // While //
    printf(" ----- Resultado con bucle While -----\n");
    contador = longitud;
    printf("El inverso del número ingresado es => ");
    while (contador >= 0)
    {
        printf("%c", listnumero[contador]);
        contador--;
    }
    return 0;
}