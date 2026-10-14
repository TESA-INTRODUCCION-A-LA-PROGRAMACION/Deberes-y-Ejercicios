#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {

    int numeros[20];
    int pares[20];
    int impares[20];

    int monto;
    int cantPar = 0;
    int cantimpar = 0;
    int i = 0;

    printf("Ingreslos numeros a mostrar por favor: ");
    scanf("%d", &monto);

    while (i < monto) {
        printf("Ingrese el numero %d: ", i + 1);
        scanf("%d", &numeros[i]);

        i++;
    }

    i = 0;

    while (i < monto) {
        if (numeros[i] % 2 == 0) {
            pares[cantPar] = numeros[i];
            cantPar++;
        } else {
            impares[cantimpar] = numeros[i];
            cantimpar++;
        }
        i++;
    }

    printf("\nNumeros pares: ");

    i = 0;

    while (i < cantPar) {
        printf("%d ", pares[i]);
        i++;
    }
    printf("\nNumeros impares: ");

    i = 0;

    while (i < cantimpar) {
        printf("%d ", impares[i]);
        i++;
    }
    return 0;
}
