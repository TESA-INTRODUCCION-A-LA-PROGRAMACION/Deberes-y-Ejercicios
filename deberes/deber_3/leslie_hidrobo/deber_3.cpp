#include <stdio.h>
#include <string.h>

int main() {

    char vector[5][50];
    char temp[50];

    printf("Ingrese 5 palabras:\n");

    for (int i = 0; i < 5; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%s", vector[i]);
    }

    printf("\nVector original:\n");

    for (int i = 0; i < 5; i++) {
        printf("%s ", vector[i]);
    }

    printf("\n\nVector inverso:\n");

    for (int i = 4; i >= 0; i--) {
        printf("%s ", vector[i]);
    }

    for (int i = 0; i < 5 - 1; i++) {
        for (int j = i + 1; j < 5; j++) {

            if (strcmp(vector[i], vector[j]) > 0) {

                strcpy(temp, vector[i]);
                strcpy(vector[i], vector[j]);
                strcpy(vector[j], temp);
            }
        }
    }

    printf("\n\nVector ordenado:\n");

    for (int i = 0; i < 5; i++) {
        printf("%s ", vector[i]);
    }

    return 0;
}
