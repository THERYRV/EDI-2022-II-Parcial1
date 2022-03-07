#include <stdio.h>
#define MAX 10
int sumaDeValoresPosicionesPares(int *arregloNumerico);
int sumaDeValoresPares(int *arregloNumerico);
void sumaDeValoresNoPasaDeCien(int *arregloNumerico, int *sumaNoPasaDeCien, int *cantidadDeValoresQueSumo);

int main (){
    int arregloNumerico[50], sumaDePosiciones, sumaDePares, sumaNoPasaDeCien = 0 , cantidadDeValoresQueSumo = 0 ;
    for (int i = 0; i < MAX; i++){
    printf("Escribe el valor numero %d, tienes que ingresar %d valores\n", i, MAX);
    scanf("%d", &arregloNumerico[i]);
    }
    sumaDePosiciones = sumaDeValoresPosicionesPares(&arregloNumerico);
    printf("El valor de la suma de de los valores de las posiciones pares del arreglo es %d\n", sumaDePosiciones);

    sumaDePares = sumaDeValoresPares(&arregloNumerico);
    printf("El valor de la suma de los valores pares del arreglo es %d\n", sumaDePares);

    sumaDeValoresNoPasaDeCien(&arregloNumerico, &sumaNoPasaDeCien, &cantidadDeValoresQueSumo);
    printf("La suma que no pasa de cien fue %d, y la cantidad de valores que sume fue de %d", sumaNoPasaDeCien, cantidadDeValoresQueSumo);
}

int sumaDeValoresPosicionesPares(int *arregloNumerico){
    int suma = 0;
    for (int i = 2; i < MAX; i++){
        if(i % 2 == 0)
        suma = suma + arregloNumerico[i];
    }
    return suma;
}

int sumaDeValoresPares (int *arregloNumerico){
    int suma = 0;
    for (int i = 0; i < MAX; i++){
        if(arregloNumerico[i] % 2 == 0)
            suma = suma + arregloNumerico[i];
    }
    return suma;
}

void sumaDeValoresNoPasaDeCien(int *arregloNumerico, int *sumaNoPasaDeCien, int *cantidadDeValoresQueSumo){
    for (int i = 0; i < MAX; i++){
    if (*sumaNoPasaDeCien < 100 && *sumaNoPasaDeCien + arregloNumerico[i+1] < 100){
        *sumaNoPasaDeCien = *sumaNoPasaDeCien + arregloNumerico[i];
        *cantidadDeValoresQueSumo = *cantidadDeValoresQueSumo + 1;}
    }
}