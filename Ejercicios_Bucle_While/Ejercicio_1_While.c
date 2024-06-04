#include <stdio.h>
// 1. Suma de los digitos de un número //
int main()
{
    // For //
    int numerosum, num, resultado, cont;
    printf("--- Ingrese cuantos números desea sumar ---\n");
    scanf("%i", &numerosum);
    printf(" ----- Resultado con bucle While -----\n");
    cont = 1;
    while (cont <= numerosum)
    {
        printf("Digite el número => ");
        scanf("%i", &num);
        resultado = resultado + num;
        cont++;
    }
    printf("La suma de todos los números ingresados es => %d\n", resultado);
    return 0;
}