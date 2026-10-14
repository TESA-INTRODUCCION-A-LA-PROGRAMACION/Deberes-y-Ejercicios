#include <stdio.h>
#define TAM 10

int esPrimo(int numero) {
    int i;

    if (numero < 2) {
        return 0;
    }
    for (i = 2; i <= numero / 2; i++) {
        if (numero % i == 0) {
            return 0;
        }
    }

    return 1;
}

void clasificarNumeros(int numeros[], int tam) {
    int i;
    printf("\nNUMERO PRIMOS \n");

    for (i = 0; i < tam; i++) {
        if (esPrimo(numeros[i])) {
            printf("%d ", numeros[i]);
        }
    }

    printf("\nNUMEROS NO PRIMOS \n");
    for (i = 0; i < tam; i++) {
        if (!esPrimo(numeros[i])) {
            printf("%d ", numeros[i]);
        }
    }

    printf("\n");
}

int main() {
    int numeros[TAM];
    int i;
    printf("Ingrese 10 numeros enteros:\n");

    for (i = 0; i < TAM; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }
    clasificarNumeros(numeros, TAM);

    return 0;
}
