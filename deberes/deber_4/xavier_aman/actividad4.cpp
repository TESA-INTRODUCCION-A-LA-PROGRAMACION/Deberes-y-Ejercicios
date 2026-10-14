#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secreto, numero;
    int intentos = 0;

    srand(time(NULL));
    secreto = rand() % 100 + 1;

    printf("ADIVINA EL NUMERO DEL 1 AL 100\n");
    printf("Tienes 5 intentos.\n");

    do {
        printf("\nIntento %d. Ingresa un numero: ", intentos + 1);
        scanf("%d", &numero);
        intentos++;

        if (numero == secreto) {
            printf("Correcto! Adivinaste el numero.\n");
        } else if (numero > secreto) {
            printf("Tu numero es mayor. Busca uno menor.\n");
        } else {
            printf("Tu numero es menor. Busca uno mayor.\n");
        }

    } while (numero != secreto && intentos < 5);

    if (numero != secreto) {
        printf("\nSe acabaron tus 5 intentos.\n");
        printf("El numero era: %d\n", secreto);
    }

    return 0;
}
