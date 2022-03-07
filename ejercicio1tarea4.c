#include <stdio.h>
#include <string.h>
void pideCadena(char *cadenaDeCaracteres);
void pideCaracter(char *caracterARevisar);
int RegresaNumeroDeVeces(char *cadenaDeCaracteres, char caracterARevisar, int tamanioDeLaCadena);

int main (){

    char cadenaDeCaracteres [100], caracterARevisar;
    int tamanioDeLaCadena, numeroDeVecesQueSeRepite;

    pideCadena(&cadenaDeCaracteres);

    tamanioDeLaCadena = strlen(cadenaDeCaracteres);

    if (tamanioDeLaCadena >= 100)
        printf("El tamanio de la cadena es mas largo de lo permitido");

    else

        pideCaracter(&caracterARevisar);

    numeroDeVecesQueSeRepite = RegresaNumeroDeVeces(&cadenaDeCaracteres, caracterARevisar, tamanioDeLaCadena);

    printf("El caracter %c se repite %d veces en la cadena de caracteres", caracterARevisar, numeroDeVecesQueSeRepite);

    return 0;
}

void pideCadena(char *cadenaDeCaracteres){

    printf("Ingresa la cadena de caracteres, tiene que ser menor a 100 caracteres\n");
    scanf("%[^\n]", cadenaDeCaracteres);
}

void pideCaracter(char *caracterARevisar){
    printf("Ingresa el carater que quieres revisar\n");
    scanf("%s", caracterARevisar);

}

int RegresaNumeroDeVeces(char *cadenaDeCaracteres, char caracterARevisar, int tamanioDeLaCadena){
    int numeroDeVecesQueSeRepite;
    for (int i = 0; i <= tamanioDeLaCadena; i++) {

    if(caracterARevisar == cadenaDeCaracteres[i])
    numeroDeVecesQueSeRepite++;
    }
    return numeroDeVecesQueSeRepite;
}