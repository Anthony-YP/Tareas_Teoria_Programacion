// 4. Radicación mediante restas sucesivas//
#include <stdio.h>

int main()
{
    double base, raiz;
    int exponente, i;

    printf("Ingrese la base => ");
    scanf("%lf", &base);
    printf("Ingrese la raíz => ");
    scanf("%d", &exponente);
    printf("==========================\n");
    // Iniciamos la raíz como la base
    raiz = base;

    // Realizar divisiones sucesivas usando un bucle for
    for (i = 1; i < exponente; i++)
    {
        raiz /= base;
    }

    printf("La raíz %d de %.2lf es => %.2lf\n", exponente, base, raiz);

    return 0;
}
