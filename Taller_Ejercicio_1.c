#include <stdio.h>
// 1. Suma de los digitos de un número //
int main()
{
    // For //
    int numerosum, num, resultado, cont;
    printf("--- Ingrese cuantos números desea sumar ---\n");
    scanf("%i", &numerosum);
    printf("====================================================\n");
    printf(" ----- Resultado con bucle For -----\n");
    for (int i = 1; i <= numerosum; i++)
    {
        printf("Digite el número => ");
        scanf("%i", &num);
        resultado = resultado + num;
    }
    printf("La suma de todos los números ingresados es => %d\n", resultado);
    printf("====================================================\n");

    // While //
    printf(" ----- Resultado con bucle While -----\n");
    resultado = 0;
    cont = 1;
    while (cont <= numerosum)
    {
        printf("Digite el número => ");
        scanf("%i", &num);
        resultado = resultado + num;
        cont++;
    }
    printf("La suma de todos los números ingresados es => %d\n", resultado);
    printf("====================================================\n");

    // Do While //
    printf(" ----- Resultado con bucle Do While -----\n");
    resultado = 0;
    cont = 1;
    do
    {
        printf("Digite el número => ");
        scanf("%i", &num);
        resultado = resultado + num;
        cont++;
    } while (cont <= numerosum);

    printf("La suma de todos los números ingresados es => %d\n", resultado);

    return 0;
}
