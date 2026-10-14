#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// Crea una lista y escoge una palabra al azar
void escogerPalabra(char palabra[]) {
    char lista[5][20] = {
        "gato", "perro", "casa", "carro", "libro"
    };

    int posicion = rand() % 5;
    strcpy(palabra, lista[posicion]);
}

int main() {
    char palabra[20];
    char respuesta[20];
    int intentos = 0;

    srand(time(NULL));
    escogerPalabra(palabra);

    printf("ADIVINA LA PALABRA\n");
    printf("Opciones: gato, perro, casa, carro, libro\n");

    do {
        printf("\nEscribe una palabra: ");
        scanf("%19s", respuesta);
        intentos++;

        if (strcmp(palabra, respuesta) != 0) {
            printf("Incorrecto. Intenta nuevamente.\n");
        }

    } while (strcmp(palabra, respuesta) != 0);

    printf("\nCorrecto! La palabra era: %s\n", palabra);
    printf("Numero de intentos: %d\n", intentos);

    return 0;
}
