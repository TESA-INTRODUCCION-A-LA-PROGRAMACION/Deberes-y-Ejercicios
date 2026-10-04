#include <stdio.h>

int main() {
    int numeros[100], pares[100], impares[100];
    int cantidad, i;
    int totalPares = 0;
    int totalImpares = 0;

    printf("Cuantos numeros desea ingresar? (1 a 100): ");
    scanf("%d", &cantidad);

    if (cantidad < 1 || cantidad > 100) {
        printf("Cantidad incorrecta.\n");
        return 0;
    }

    for (i = 0; i < cantidad; i++) {
        printf("Ingrese el numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    for (i = 0; i < cantidad; i++) {
        if (numeros[i] % 2 == 0) {
            pares[totalPares] = numeros[i];
            totalPares++;
        } else {
            impares[totalImpares] = numeros[i];
            totalImpares++;
        }
    }

    printf("\nLista de numeros pares: ");
    for (i = 0; i < totalPares; i++) {
        printf("%d ", pares[i]);
    }

    printf("\nLista de numeros impares: ");
    for (i = 0; i < totalImpares; i++) {
        printf("%d ", impares[i]);
    }

    printf("\n");
    return 0;
}
