#include <stdio.h>

int main() {
    int tam, i;
    int vector[100];
    int pares[100];
    int impares[100];
    int tam_pares = 0;
    int tam_impares = 0;

    printf("Ingrese el tamanio del arreglo: ");
    scanf("%d", &tam);

    for (i = 0; i < tam; i++) {
        printf("Ingrese el elemento %d => ", i + 1);
        scanf("%d", &vector[i]);
    }

    for (i = 0; i < tam; i++) {
        if (vector[i] % 2 == 0) {
            pares[tam_pares] = vector[i];
            tam_pares++;
        } else {
            impares[tam_impares] = vector[i];
            tam_impares++;
        }
    }

    printf("\nLista de Numeros Pares:\n");
    for (i = 0; i < tam_pares; i++) {
        printf("\t%d", pares[i]);
    }

    printf("\n\nLista de Numeros Impares:\n");
    for (i = 0; i < tam_impares; i++) {
        printf("\t%d", impares[i]);
    }

    printf("\n");
    return 0;
}
