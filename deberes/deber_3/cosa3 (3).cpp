#include <stdio.h>
#include <string.h>

int main() {
    char nombres[5][100];
    char ordenado[5][100];
    char momentaneo[100];

    int i, j, menor;

    printf("Ingrese 5 palabras:\n");

    for (i = 0; i < 5; i++) {
        printf("Palabra %d: ", i + 1);
        scanf("%49s", nombres[i]);
    }


    for (i = 0; i < 5; i++) {
        strcpy(ordenado[i], nombres[i]);
    }


    for (i = 0; i < 4; i++) {

        menor = i;

        for (j = i + 1; j < 5; j++) {

            if (strcmp(ordenado[j], ordenado[menor]) < 0) {
                menor = j;
            }
        }

        if (menor != i) {
            strcpy(momentaneo, ordenado[i]);
            strcpy(ordenado[i], ordenado[menor]);
            strcpy(ordenado[menor], momentaneo);
        }
    }

    printf("\nVector inverso:\n");

    for (i = 4; i >= 0; i--) {
        printf("%s ", nombres[i]);
    }

    printf("\n\nVector ordenado:\n");

    for (i = 0; i < 5; i++) {
        printf("%s ", ordenado[i]);
    }

    return 0;
}
