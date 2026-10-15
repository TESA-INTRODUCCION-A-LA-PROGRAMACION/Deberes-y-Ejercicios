#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define CANTIDAD 5
#define TAMANO 20

void escogerPalabra(char palabra[]) {

    const char palabras[CANTIDAD][TAMANO] = {
        "computadora",
        "programacion",
        "teclado",
        "internet",
        "escuela"
    };

    int posicion;

    posicion = rand() % CANTIDAD;

    strcpy(palabra, palabras[posicion]);
}

int main() {

    char palabra[TAMANO];
    char intento[TAMANO];

    srand(time(NULL));

    escogerPalabra(palabra);

    printf("Adivina la palabra: ");
    scanf("%s", intento);

    if (strcmp(intento, palabra) == 0) {
        printf("¡Correcto! Adivinaste la palabra.\n");
    } else {
        printf("Incorrecto. La palabra era: %s\n", palabra);
    }

    return 0;
}
