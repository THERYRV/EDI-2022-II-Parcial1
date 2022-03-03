#include <stdio.h>
#define N 10
int main()
{
    int numeroIngresado, mayor=0, menor=100000;
    for (int i = 0; i < N; ++i) {
        printf("Escribe el valor numero %d\n", i + 1);
        scanf("%d", &numeroIngresado);
        if (numeroIngresado > mayor)
            mayor = numeroIngresado;
        if (numeroIngresado < menor)
            menor = numeroIngresado;
    }
    printf("El numero mayor es %d, y el menor es %d", mayor, menor);
    return 0;
}
