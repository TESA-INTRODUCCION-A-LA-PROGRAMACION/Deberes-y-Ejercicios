#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define TAMANIO 100

/* Crea una lista de palabras y devuelve una elegida al azar. */
const char *escogerPalabra(void) {
    const char *palabras[] = {
        "gato", "perro", "casa", "libro", "sol", "luna", "arbol", "mesa"
    };
    int cantidad = (int)(sizeof(palabras) / sizeof(palabras[0]));
    int posicion = rand() % cantidad;

    return palabras[posicion];
}

int main(void) {
    const char *palabraSecreta;
    char respuesta[TAMANIO];
    size_t longitud;
    int intentos = 0;
    int caracter;

    /* Inicializa el generador una sola vez al comenzar el programa. */
    srand((unsigned int)time(NULL));
    palabraSecreta = escogerPalabra();

    printf("=== ADIVINA LA PALABRA ===\n");
    printf("Opciones: gato, perro, casa, libro, sol, luna, arbol, mesa.\n");
    printf("Escriba la palabra completa en minusculas y sin tildes.\n");
    printf("Pista: la palabra tiene %zu letras.\n", strlen(palabraSecreta));
    printf("Puede intentarlo hasta acertar. Para salir, escriba salir.\n\n");

    /* La adivinanza se realiza en la funcion principal. */
    while (1) {
        printf("Su respuesta: ");
        fflush(stdout);
        if (fgets(respuesta, sizeof(respuesta), stdin) == NULL) {
            printf("\nEntrada finalizada. Fin del juego.\n");
            return 0;
        }

        longitud = strlen(respuesta);
        if (longitud > 0 && respuesta[longitud - 1] == '\n') {
            respuesta[longitud - 1] = '\0';
        } else {
            caracter = getchar();
            if (caracter != '\n' && caracter != EOF) {
                while ((caracter = getchar()) != '\n' && caracter != EOF) {
                }
                printf("Error: respuesta demasiado larga.\n");
                continue;
            }
        }

        if (respuesta[0] == '\0') {
            printf("Escriba una palabra.\n");
            continue;
        }
        if (strcmp(respuesta, "salir") == 0) {
            printf("Fin del juego. La palabra era: %s.\n", palabraSecreta);
            break;
        }

        intentos++;
        if (strcmp(respuesta, palabraSecreta) == 0) {
            printf("\nCorrecto! La palabra era: %s.\n", palabraSecreta);
            printf("Numero de intentos: %d\n", intentos);
            break;
        }
        printf("No es esa palabra. Intente nuevamente.\n");
        printf("Otra pista: comienza con la letra '%c'.\n\n", palabraSecreta[0]);
    }

    printf("\nPresione ENTER para salir...");
    getchar();
    return 0;
}
