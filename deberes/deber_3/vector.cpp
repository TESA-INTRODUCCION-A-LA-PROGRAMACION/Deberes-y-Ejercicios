#include <stdio.h>
#include <string.h>

int main() {
    char victor[5][10];
    char inverso[5][10];
    char ordenado[5][10];
    char tem[10];

    printf("Ingrese 5 palabras:\n");

    for (int i = 0; i < 5; i++) {
        printf("Palabra %d: ", i + 1);
        scanf("%30s", victor[i]);
    }

    for (int i = 0; i < 5; i++) {
        strcpy(inverso[i], victor[4 - i]);
    }

    for (int i = 0; i < 5; i++) {
        strcpy(ordenado[i], victor[i]);
    }

    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (strcmp(ordenado[i], ordenado[j]) > 0) {
                strcpy(tem, ordenado[i]);
                strcpy(ordenado[i], ordenado[j]);
                strcpy(ordenado[j], tem);
            }
        }
    }

    printf("\nVector inverso:\n");
    for (int i = 0; i < 5; i++) {
        printf("%s ", inverso[i]);
    }


    printf("\n\nVector ordenado:\n");
    for (int i = 0; i < 5; i++) {
        printf("%s ", ordenado[i]);
    }

    return 0;
}
