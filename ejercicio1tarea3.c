#include <stdio.h>
int validaNumero(int numero);
int main(){
    int numeroAValidar, validacion = 0;
    printf("Escribe el numero que quieres saber si es perfecto\n");
    scanf("%d", &numeroAValidar);
    validacion = validaNumero(numeroAValidar);
    if (validacion == 1)
        printf("El numero %d es perfecto", numeroAValidar);
    else
        printf("El numero %d no es perfecto", numeroAValidar);
    return 0;
}

int validaNumero(int numero){
    int sumaDeDivisores = 0, validacion = 0, i;
    for (i = 1; i < numero ; ++i)
    {
        if (numero % i == 0)
            sumaDeDivisores = sumaDeDivisores + i;
    }
    if(sumaDeDivisores == numero)
        validacion = 1;
    else
        validacion = 0;
    return validacion;
}
