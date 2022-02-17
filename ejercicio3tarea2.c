#include <stdio.h>

int main()
{
    float lado1, lado2, lado3;

    printf("Escribe el primer lado del triangulo\n");
    scanf("%f", &lado1);

    printf("Escribe el segundo lado del triangulo\n");
    scanf("%f", &lado2);

    printf("Escribe el tercer lado del triangulo\n");
    scanf("%f", &lado3);

    if (lado1 == lado2 && lado1 == lado3)
        printf("El triangulo es equilatero");
    else if (lado1 == lado2 && lado1 != lado3 || lado1 == lado3 && lado1 != lado2 || lado2 == lado3 && lado1 != lado3)
        printf("El triangulo es isoceles");
    else if (lado1 != lado2 && lado2 != lado3 && lado1 != lado3)
        printf("El triangulo es escaleno");
    return 0;
}
