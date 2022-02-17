#include <stdio.h>

int main()
{
    int hora;

    printf("Escribe que hora es(hora y minuto sin espacios-> 0000)\n");
    scanf("%d",&hora);

    if (hora<1159)
        printf("Buenos dias");

    else if (hora<1751)
        printf("Buenas tardes");

    else if (hora<2400)
        printf("Buenas noches");

    else
        printf("La hora no es valida");
    return 0;
}
