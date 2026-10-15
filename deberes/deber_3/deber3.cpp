#include <stdio.h>
#include <string.h>

int main() {
    char nombres[5][25];
    char ordenado[5][25];
    char normal[25];

    int i = 0;
    int j;

    printf("Ingrese 5 palabras:\n");

    while (i < 5) {
        printf("palabra %d: ", i + 1);
        scanf("%49s", nombres[i]);
        i++;
    }

    i = 0;

    while (i < 5) {
        strcpy(ordenado[i], nombres[i]);
        i++;
    }

    i = 0;

    while (i < 4) {
        j = i + 1;

        while (j < 5) {
            if (strcmp(ordenado[i], ordenado[j]) > 0) {
                strcpy(normal, ordenado[i]);
                strcpy(ordenado[i], ordenado[j]);
                strcpy(ordenado[j], normal);
            }

            j++;
        }

        i++;
    }

    printf("\nVector original:\n");

    i = 0;
    while (i < 5) {
        printf("%s ", nombres[i]);
        i++;
    }

    printf("\n\nVector ordenado:\n");

    i = 0;
    while (i < 5) {
        printf("%s ", ordenado[i]);
        i++;
    }

    printf("\n\nVector inverso:\n");

    i = 4;
    while (i >= 0) {
        printf("%s ", nombres[i]);
        i--;
    }

    return 0;
}
