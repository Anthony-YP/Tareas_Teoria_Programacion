// 4. Radicación mediante restas sucesivas//
#include <stdio.h>

int main()
{
    int srespuesta;
    int raiz = 2;
    int base = 4;
    if (base % raiz == 0)
    {
        int i = 0; // Inicializamos el contador fuera del ciclo
        while (i <= raiz)
        {
            srespuesta = base - raiz;
            i++; // Incrementamos el contador dentro del ciclo
        }
    }
    printf("La raíz es %d\n", srespuesta);
    return 0;
}