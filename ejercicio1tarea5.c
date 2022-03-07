#include <stdio.h>
#define RENGLONES 4
#define COLUMNAS 3
void capturaArregloBidimensional(int arregloBidimensional[RENGLONES][COLUMNAS]);
void regresaMatrizConSuma(int arregloBidimensionalA[RENGLONES][COLUMNAS], int arregloBidimensionalB[RENGLONES][COLUMNAS], int arregloSuma[RENGLONES][COLUMNAS]);
void regresaArregloPromedioRenglones(int arregloBidimensionalA[RENGLONES][COLUMNAS], int arregloPromedioRenglones[RENGLONES]);
void regresaArregloPromedioColumnas(int arregloSuma[RENGLONES][COLUMNAS], int arregloPromedioColumnas[COLUMNAS]);
void imprimeMatrices(int matriz[RENGLONES][COLUMNAS]);

int main(){
    int arregloBidimensionalA[RENGLONES][COLUMNAS], arregloBidimensionalB[RENGLONES][COLUMNAS], arregloSuma[RENGLONES][COLUMNAS], arregloPromedioRenglones[RENGLONES], arregloPromedioColumnas[COLUMNAS];
    capturaArregloBidimensional(arregloBidimensionalA);
    capturaArregloBidimensional(arregloBidimensionalB);
    regresaMatrizConSuma(arregloBidimensionalA, arregloBidimensionalB, arregloSuma);
    regresaArregloPromedioRenglones(arregloSuma, arregloPromedioRenglones);
    regresaArregloPromedioColumnas(arregloSuma, arregloPromedioColumnas);
    printf("Matriz A:\n");
    imprimeMatrices(arregloBidimensionalA);

    printf("Matriz B:\n");
    imprimeMatrices(arregloBidimensionalB);

    printf("Matriz Suma:\n");
    imprimeMatrices(arregloSuma);

    printf("Arreglo promedio de cada renglon(de la matriz suma):\n");
    for (int i = 0; i < RENGLONES; ++i) {
        printf("%d ", arregloPromedioRenglones[i]);
    }

    printf("\nArreglo promedio de cada columna (de la matriz suma):\n");
    for (int i = 0; i < COLUMNAS; ++i) {
        printf("%d ", arregloPromedioColumnas[i]);
    }

}




void capturaArregloBidimensional(int arregloBidimensional[RENGLONES][COLUMNAS]){

    for (int i = 0; i < RENGLONES; i++){
        for (int j = 0; j < COLUMNAS; j++){
            printf("Ingresa el valor %d, %d\n", i, j);
            scanf("%d", &arregloBidimensional[i][j]);
        }
    }
}

void regresaMatrizConSuma(int arregloBidimensionalA[RENGLONES][COLUMNAS], int arregloBidimensionalB[RENGLONES][COLUMNAS], int arregloSuma[RENGLONES][COLUMNAS]){
    for (int i = 0; i < RENGLONES; i++){
        for (int j = 0; j < COLUMNAS; j++){
           arregloSuma[i][j] = arregloBidimensionalA[i][j] + arregloBidimensionalB [i][j];
        }
    }
}

void imprimeMatrices(int matriz[RENGLONES][COLUMNAS]){
    for (int i = 0; i < RENGLONES; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void regresaArregloPromedioRenglones(int arregloBidimensionalA[RENGLONES][COLUMNAS], int arregloPromedioRenglones[RENGLONES]){
    int sumaDeRenglon = 0;
    for (int i = 0; i < RENGLONES; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
         sumaDeRenglon = sumaDeRenglon + arregloBidimensionalA[i][j];
        }
        arregloPromedioRenglones[i] = sumaDeRenglon / COLUMNAS;
        sumaDeRenglon = 0;
    }
}

void regresaArregloPromedioColumnas(int arregloSuma[RENGLONES][COLUMNAS], int arregloPromedioColumnas[COLUMNAS]){
    int sumaDeColumna = 0;
    for (int i = 0; i < COLUMNAS; i++) {
        for (int j = 0; j < RENGLONES; j++) {
            sumaDeColumna = sumaDeColumna + arregloSuma[j][i];
        }
        arregloPromedioColumnas[i] = sumaDeColumna / RENGLONES;
        sumaDeColumna = 0;
    }
}