#include <stdio.h>
#define TAM 4

int main(){
    int clave[TAM], mayor = 0, menor = 100, posicionDelMayor, posicionDelMenor, stock[TAM];
    float precio[TAM], totalDeVentaEsperada = 0;

    for (int i = 0; i < TAM; i++) {
        printf("Escribe la clave del producto %d\n", i+1);
        scanf("%d", &clave[i]);
        printf("Escribe el precio del producto %d\n", i+1);
        scanf("%f", &precio[i]);
        printf("Escribe el stock del producto %d\n", i+1);
        scanf("%d", &stock[i]);
    }


    printf("Clave:Precio:Stock:\n");
    for (int j = 0; j < TAM; j++) {
        printf("%d %.2f %d\n", clave[j],precio[j],stock[j]);
    }

    for (int k = 0; k < TAM; k++) {
        if (precio[k] > mayor){
            mayor = precio[k];
            posicionDelMayor = k;}
    }

    for (int l = 0; l < TAM; l++) {
        if (stock[l] < menor){
            menor = stock[l];
            posicionDelMenor = l;}
    }

    for (int m = 0; m < TAM; m++) {
        totalDeVentaEsperada = totalDeVentaEsperada + precio[m] * stock[m];
    }

    printf("Producto con mayor precio: %d\n", clave[posicionDelMayor]);
    printf("Producto con menos stock: %d\n", clave[posicionDelMenor]);
    printf("Total de venta esperada: %.2f\n", totalDeVentaEsperada);
}