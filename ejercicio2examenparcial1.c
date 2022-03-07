#include <stdio.h>
#include <string.h>
void cambiaVocales(char *cadenaDeCaracteres, int tamanioDeLaCadena);

int main (){
    char cadenaDeCaracteres[100];
    int tamanioDeLaCadena;
    printf("Ingresa la cadena de caracteres\n");
    scanf("%[^\n]", &cadenaDeCaracteres);

    tamanioDeLaCadena = strlen(&cadenaDeCaracteres);
    cambiaVocales(&cadenaDeCaracteres, tamanioDeLaCadena);
    printf("%s", &cadenaDeCaracteres);

}

void cambiaVocales (char *cadenaDeCaracteres, int tamanioDeLaCadena){
    for (int i = 0; i < tamanioDeLaCadena; ++i) {
        switch(cadenaDeCaracteres[i]) {
            case 'a': cadenaDeCaracteres[i] = 'A';
                break;
            case 'e': cadenaDeCaracteres[i] = 'E';
                break;
            case 'i': cadenaDeCaracteres[i] = 'I';
                break;
            case 'o': cadenaDeCaracteres[i] = 'O';
                break;
            case 'u': cadenaDeCaracteres[i] = 'U';
                break;
            case 'A': cadenaDeCaracteres[i] = 'a';
                break;
            case 'E': cadenaDeCaracteres[i] = 'e';
                break;
            case 'I': cadenaDeCaracteres[i] = 'i';
                break;
            case 'O': cadenaDeCaracteres[i] = 'o';
                break;
            case 'U': cadenaDeCaracteres[i] = 'u';
                break;
            case ' ': cadenaDeCaracteres[i] = ' ';
                break;
        }
    }
}