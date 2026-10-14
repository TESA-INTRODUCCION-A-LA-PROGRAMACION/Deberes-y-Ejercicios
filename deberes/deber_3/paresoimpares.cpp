#include <stdio.h>

int main() {

    int numeros[100];
    int pares[100];
    int impares[100];

    int cant;
    int cantiPares = 0;
    int cantimpares = 0;
    int i = 0;

    printf("Ingrese la cantidad de numeros: ");
    scanf("%d", &cant);

    while (i < cant) {
        printf("Ingrese el numero %d: ", i + 1);
        scanf("%d", &numeros[i]);

        i++;
    }

    i = 0;

    while (i < cant) {

        if (numeros[i] % 2 == 0) {
            pares[cantiPares] = numeros[i];
            cantiPares++;
        } else {
            impares[cantimpares] = numeros[i];
            cantimpares++;
        }

        i++;
    }
    
    printf("\nNumeros pares: ");

    i = 0;

    while (i < cantiPares) {
        printf("%d ", pares[i]);
        i++;
    }

    printf("\nNumeros impares: ");

    i = 0;

    while (i < cantimpares) {
        printf("%d ", impares[i]);
        i++;
    }

    return 0;
}
