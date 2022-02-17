#include <stdio.h>
int main() {

    int dias, horas, minutos, segundosTotales;

    printf("Escribe el numero de segundos\n");
    scanf("%d", &segundosTotales);

    dias = segundosTotales/86400;
    segundosTotales = segundosTotales - dias*86400;

    horas = segundosTotales/3600;
    segundosTotales = segundosTotales - horas*3600;

    minutos = segundosTotales/60;
    segundosTotales = segundosTotales - minutos*60;

    printf("Dias: %d\n", dias);
    printf("Horas: %d\n", horas);
    printf("Minutos: %d\n", minutos);
    printf("Segundos: %d\n", segundosTotales);
    return 0;
}