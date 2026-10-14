#include <stdio.h>

int main() {

    int numeros[10];
    int pares[10];
    int impares[10];

    int cantidadPares = 0;
    int cantidadImpares = 0;

    char entrada[20];
    int valido;

    printf("Ingrese 10 numeros enteros:\n");

    for (int i = 0; i < 10; i++) {

        do {

            valido = 1;

            printf("Numero %d: ", i + 1);
            scanf("%s", entrada);

            for (int j = 0; entrada[j] != '\0'; j++) {

                if (entrada[j] < '0' || entrada[j] > '9') {
                    valido = 0;
                }
            }

            if (valido == 0) {
                printf("Error: ingrese un numero entero.\n");
            }

        } while (valido == 0);

        sscanf(entrada, "%d", &numeros[i]);

        if (numeros[i] % 2 == 0) {

            pares[cantidadPares] = numeros[i];
            cantidadPares++;

        } else {

            impares[cantidadImpares] = numeros[i];
            cantidadImpares++;
        }
    }

    printf("\nNumeros pares:\n");

    for (int i = 0; i < cantidadPares; i++) {
        printf("%d ", pares[i]);
    }

    printf("\n\nNumeros impares:\n");

    for (int i = 0; i < cantidadImpares; i++) {
        printf("%d ", impares[i]);
    }

    return 0;
}
