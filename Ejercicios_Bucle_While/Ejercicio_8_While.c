// 8. Producto de una serie geométrica //

#include <stdio.h>
int main()
{
    int razon, n, resultado = 1;
    int i = 1; // Inicializamos la variable de control del ciclo while
    printf("Ingrese la razon comun (Por ejemplo: 2): ");
    scanf("%d", &razon);
    printf("¿Cuantos numeros desea ejecutar?: ");
    scanf("%d", &n);
    while (i <= n)
    {
        resultado *= razon;
        printf("%d", resultado);

        if (i < n)
        {
            printf(" , ");
        }
        i++;
    }
    return 0;
}