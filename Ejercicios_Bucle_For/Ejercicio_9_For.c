// 9. Número de dígitos de un número //
#include <stdio.h>

int main()
{
    int numero, contador;
    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    // Inicializar el contador en 0
    contador = 0;

    // Contar el número de dígitos
    for (contador = 0; numero != 0; contador++)
    {
        numero = numero / 10;
    }

    printf("El numero ingresado tiene %d digitos.\n", contador);

    return 0;
}