#include <stdio.h>

// Determina cuales numeros del arreglo son primos
void determinarPrimos(int numeros[], int primo[]) {
    int i, divisor, divisores;

    for (i = 0; i < 10; i++) {
        divisores = 0;

        for (divisor = 1; divisor <= numeros[i]; divisor++) {
            if (numeros[i] % divisor == 0) {
                divisores++;
            }
        }

        if (divisores == 2) {
            primo[i] = 1;
        } else {
            primo[i] = 0;
        }
    }
}

int main() {
    int numeros[10];
    int primo[10];
    int i;

    // Ingresar los 10 numeros
    for (i = 0; i < 10; i++) {
        printf("Ingresa el numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    determinarPrimos(numeros, primo);

    // Mostrar la lista de primos
    printf("\nPrimos: ");
    for (i = 0; i < 10; i++) {
        if (primo[i] == 1) {
            printf("%d ", numeros[i]);
        }
    }

    // Mostrar la lista de no primos
    printf("\nNo primos: ");
    for (i = 0; i < 10; i++) {
        if (primo[i] == 0) {
            printf("%d ", numeros[i]);
        }
    }

    printf("\n");
    return 0;
}
