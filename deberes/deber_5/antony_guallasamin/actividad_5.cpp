#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define TAMANIO 200

/* Compara los caracteres desde ambos extremos hacia el centro. */
int esPalindromo(const char texto[]) {
    int izquierda = 0;
    int derecha = (int)strlen(texto) - 1;

    while (izquierda < derecha) {
        if (texto[izquierda] != texto[derecha]) {
            return 0;
        }
        izquierda++;
        derecha--;
    }
    return 1;
}

int main(void) {
    char original[TAMANIO];
    char preparado[TAMANIO];
    int i, j, caracter;
    int valido;
    size_t longitud;
    unsigned char letra;

    printf("=== ACTIVIDAD 5: PALINDROMOS ===\n");
    printf("Un palindromo se lee igual de izquierda a derecha y al reves.\n");
    printf("Ingrese una palabra o frase sin tildes ni enie (maximo 199 caracteres).\n");
    printf("Se ignoran los espacios y las diferencias de mayusculas.\n");
    printf("Los signos de puntuacion si se comparan.\n\n");

    while (1) {
        printf("Ingrese el texto: ");
        fflush(stdout);
        if (fgets(original, sizeof(original), stdin) == NULL) {
            printf("\nEntrada finalizada.\n");
            return 1;
        }

        longitud = strlen(original);
        if (longitud > 0 && original[longitud - 1] == '\n') {
            original[longitud - 1] = '\0';
        } else {
            caracter = getchar();
            if (caracter != '\n' && caracter != EOF) {
                while ((caracter = getchar()) != '\n' && caracter != EOF) {
                }
                printf("Error: el texto supera los 199 caracteres.\n");
                continue;
            }
        }

        /* Copia el texto sin espacios y en minusculas. */
        j = 0;
        valido = 1;
        for (i = 0; original[i] != '\0'; i++) {
            letra = (unsigned char)original[i];
            if (letra > 127) {
                valido = 0;
                break;
            }
            if (!isspace(letra)) {
                preparado[j] = (char)tolower(letra);
                j++;
            }
        }
        preparado[j] = '\0';

        if (!valido) {
            printf("Error: use texto sin tildes ni enie.\n");
            continue;
        }
        if (j == 0) {
            printf("Error: el texto no puede estar vacio ni contener solo espacios.\n");
            continue;
        }
        break;
    }

    printf("\nTexto ingresado: %s\n", original);
    if (esPalindromo(preparado)) {
        printf("Resultado: SI es palindromo.\n");
    } else {
        printf("Resultado: NO es palindromo.\n");
    }

    printf("\nPresione ENTER para salir...");
    getchar();
    return 0;
}
