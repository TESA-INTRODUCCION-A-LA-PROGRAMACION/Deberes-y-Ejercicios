#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

const char* escogerPalabra() {
    const char* palabras[] = {
        "pc",
        "programacion",
        "ciberseguridad",
        "profe",
        "monitor",
        "raton",
        "profe",
        "tesa"
    };

    int cantidad = sizeof(palabras) / sizeof(palabras[0]);
    int posicion = rand() % cantidad;
    return palabras[posicion];
}

int main() {
    char intento[15];
    const char* palabraSecreta;

    srand(time(NULL));

    palabraSecreta = escogerPalabra();

    printf("JUEGO DE PALABRAS TESA\n");

    printf("Adivina la palabra secreta.\n");
    printf("Escribe tu respuesta: ");
    scanf("%49s", intento);

    if (strcmp(intento, palabraSecreta) == 0) {
        printf("\n¡Correcto! Has adivinado la palabra.\n");
    } else {
        printf("\nIncorrecto.\n");
        printf("La palabra era: %s\n", palabraSecreta);
    }

    return 0;
}
