#include <stdio.h>
#define RENGLONES 3
#define COLUMNAS 4
void capturaArreglo(int arreglo[RENGLONES][COLUMNAS]);
void imprimeMatriz(int matriz[RENGLONES][COLUMNAS]);
void regresaMatrizSumaDeVecinos(int arreglo[RENGLONES][COLUMNAS], int arregloSumaDeVecinos[RENGLONES][COLUMNAS]);

int main (){
    int arregloLeido[RENGLONES][COLUMNAS], arregloSuma[RENGLONES][COLUMNAS];
    capturaArreglo(arregloLeido);
    printf("Matriz ingresada: \n");
    imprimeMatriz(arregloLeido);
    regresaMatrizSumaDeVecinos(arregloLeido, arregloSuma);
    printf("Matriz de la suma de vecinos: \n");
    imprimeMatriz(arregloSuma);
}

void capturaArreglo(int arreglo[RENGLONES][COLUMNAS]){

    for (int i = 0; i < RENGLONES; i++){
        for (int j = 0; j < COLUMNAS; j++){
            printf("Ingresa el valor %d, %d\n", i, j);
            scanf("%d", &arreglo[i][j]);
        }
    }
}

void imprimeMatriz(int matriz[RENGLONES][COLUMNAS]){
    for (int i = 0; i < RENGLONES; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void regresaMatrizSumaDeVecinos(int arreglo[RENGLONES][COLUMNAS], int arregloSumaDeVecinos[RENGLONES][COLUMNAS]){
    for (int i = 0; i < RENGLONES; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            if(i-1 != -1 && j-1 != -1 && i+1 < RENGLONES && j+1 < COLUMNAS)
            arregloSumaDeVecinos[i][j] = arreglo[i][j] + arreglo[i+1][j] + arreglo[i][j+1] + arreglo[i-1][j] + arreglo[i][j-1];
            else if(i-1 == -1 && j-1 == -1)
                arregloSumaDeVecinos[i][j] = arreglo[i][j] + arreglo[i+1][j] + arreglo[i][j+1];
            else if(i-1 == -1 && i+1 < RENGLONES && j-1 != -1 && j+1 < COLUMNAS)
                arregloSumaDeVecinos[i][j] = arreglo[i][j] + arreglo[i+1][j] + arreglo[i][j+1] + arreglo[i][j-1];
            else if(i-1 == -1 && j+1 == COLUMNAS)
                arregloSumaDeVecinos[i][j] = arreglo[i][j] +arreglo[i+1][j] + arreglo [i][j-1];
            else if(j-1 == -1 && j+1 < COLUMNAS && i+1 < RENGLONES && i-1 != -1)
                arregloSumaDeVecinos[i][j] = arreglo[i][j] + arreglo[i+1][j] + arreglo[i-1][j] + arreglo[i][j+1];
            else if(j+1 == COLUMNAS && i+1 < RENGLONES && j-1 != -1 && i-1 != -1)
                arregloSumaDeVecinos[i][j] = arreglo[i][j] + arreglo[i-1][j] + arreglo[i+1][j] + arreglo[i][j-1];
            else if(i+1 == RENGLONES && j-1 == -1)
                arregloSumaDeVecinos[i][j] = arreglo[i][j] + arreglo[i-1][j] + arreglo [i][j+1];
            else if(i+1 == RENGLONES && i-1 != -1 && j-1 != -1 && j+1 < COLUMNAS)
                arregloSumaDeVecinos[i][j] = arreglo[i][j] + arreglo[i-1][j] + arreglo[i][j+1] + arreglo[i][j-1];
            else if(j+1 == COLUMNAS && i+1 == RENGLONES && i-1 != -1 && j-1 != -1)
                arregloSumaDeVecinos[i][j] = arreglo[i][j] + arreglo[i-1][j] + arreglo[i][j-1];

        }
    }
}