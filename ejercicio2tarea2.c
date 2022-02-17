#include <stdio.h>

int main()
{
    float precioPorKilo, kilosComprados, precioAPagar, descuento;

    printf("Cual es el precio por kilo?\n");
    scanf("%f",&precioPorKilo);

    printf("Cual es el peso en kilo de las manzanas\n");
    scanf("%f",&kilosComprados);

    if (kilosComprados<=2)
        descuento = 0;
    else if (kilosComprados<=5)
        descuento = 10;
    else if (kilosComprados<=10)
        descuento = 15;
    else
        descuento = 20;

    precioAPagar = precioPorKilo*kilosComprados - precioPorKilo*kilosComprados*(descuento/100);

    printf("El precio a pagar es de: %.2f pesos", precioAPagar);

    return 0;
}
