// 9. Número de dígitos de un número //

#include <stdio.h>

int main()
{
    int numero, contador = 0;

    // Solicitar al usuario que ingrese el número
    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    // Contar el número de dígitos
    while (numero != 0)
    {
        numero = numero / 10;
        contador++;
    }

    // Presentar el resultado
    printf("El numero ingresado tiene %d digitos.\n", contador);

    return 0;
}