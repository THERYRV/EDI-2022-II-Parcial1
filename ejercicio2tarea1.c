#include <stdio.h>
int main() {

    int dias, horas, minutos, segundosTotales;

    printf("Escribe el numero de días\n");
    scanf("%d", &dias);

    printf("Escribe el numero de horas\n");
    scanf("%d", &horas);

    printf("Escribe el numero de minutos\n");
    scanf("%d", &minutos);

    segundosTotales = dias*86400 + horas*3600 + minutos*60;

    printf("%d días, %d horas y %d minutos son: %d segundos.", dias,horas,minutos,segundosTotales);

    return 0;
}