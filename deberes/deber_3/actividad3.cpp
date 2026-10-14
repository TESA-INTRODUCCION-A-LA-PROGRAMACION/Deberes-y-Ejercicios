#include <stdio.h>

int main() {
    int numeros[100];
    int pares[100];
    int impares[100];

    int cantidad;
    int p = 0;
    int im = 0;

    printf("Cuantos numeros vas a ingresar? ");
    scanf("%d", &cantidad);

    for (int i = 0; i < cantidad; i++) {
        printf("Ingrese el numero %d: ", i + 1);
        scanf("%d", &numeros[i]);

        if (numeros[i] % 2 == 0) {
            pares[p] = numeros[i];
            p++;
        } else {
            impares[im] = numeros[i];
            im++;
        }
    }

    printf("\nLista de numeros pares:\n");

    for (int i = 0; i < p; i++) {
        printf("%d ", pares[i]);
    }

    printf("\n\nLista de numeros impares:\n");

    for (int i = 0; i < im; i++) {
        printf("%d ", impares[i]);
    }

    return 0;
}
