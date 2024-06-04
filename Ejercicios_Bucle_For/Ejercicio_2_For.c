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

    // For //
    printf(" ----- Resultado con bucle For -----\n");
    printf("El inverso del número ingresado es => ");
    for (int i = longitud; i >= 0; i--)
    {
        printf("%c", listnumero[i]);
    }
    return 0;
}