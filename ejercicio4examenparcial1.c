#include <stdio.h>
void haceCalculos(int *a, int *b, int *c);

int main() {
    int a, b, c;
    printf("Ingresa el valor a\n");
    scanf("%d", &a);

    printf("Ingresa el valor b\n");
    scanf("%d", &b);

    printf("Ingresa el valor c\n");
    scanf("%d", &c);

    haceCalculos(&a, &b, &c);
    printf("Resultados finales, a: %d, b: %d, c: %d", a, b, c);
}

void haceCalculos(int *a, int *b, int *c){
    if (*a > *b)
        *b = 2 * *b;
    else if (*a < *b)
        *c = *c - *a;
    if(*c < 0)
        *c = *c * -1;
}
