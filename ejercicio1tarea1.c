#include <stdio.h>
int main() {

    float precioDelProducto, precioDelProductoConDescuento, descuentoDelProducto;

    printf("Escribe el precio del producto\n");
    scanf("%f", &precioDelProducto);


    printf("Escribe el porcentaje de descuento\n");
    scanf("%f", &descuentoDelProducto);

    precioDelProductoConDescuento = precioDelProducto - precioDelProducto * (descuentoDelProducto/100);
    printf("El precio del producto con descuento es: %.2f", precioDelProductoConDescuento);

    return 0;
}