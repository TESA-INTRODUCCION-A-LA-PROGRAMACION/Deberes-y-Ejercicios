#include <stdio.h>
#include <string.h>

#define ELEMENTOS 5
#define TAMANIO 100

int main(void) {
    
    char original[ELEMENTOS][TAMANIO];
    char inverso[ELEMENTOS][TAMANIO];
    char ordenado[ELEMENTOS][TAMANIO];
    char auxiliar[TAMANIO];
    int i, j, caracter;
    size_t longitud;

    printf("=== VECTOR DE CINCO CADENAS ===\n");
    printf("Escriba una cadena por linea (maximo 99 caracteres).\n");
    printf("Para un orden alfabetico sencillo, use minusculas sin tildes.\n\n");

    
    for (i = 0; i < ELEMENTOS; i++) {
        while (1) {
            printf("Ingrese la cadena %d: ", i + 1);
            fflush(stdout);

            if (fgets(original[i], TAMANIO, stdin) == NULL) {
                printf("\nError: no se pudieron leer las cinco cadenas.\n");
                return 1;
            }

            longitud = strlen(original[i]);
            if (longitud > 0 && original[i][longitud - 1] == '\n') {
                original[i][longitud - 1] = '\0';
            } else {
                /* Si ocupa todo el espacio, verifica si sobra texto. */
                caracter = getchar();
                if (caracter != '\n' && caracter != EOF) {
                    while ((caracter = getchar()) != '\n' && caracter != EOF) {
                    }
                    printf("Error: la cadena supera los 99 caracteres.\n");
                    continue;
                }
            }

            if (original[i][0] == '\0') {
                printf("Error: la cadena no puede estar vacia.\n");
                continue;
            }
            break;
        }
    }

    
    for (i = 0; i < ELEMENTOS; i++) {
        strcpy(inverso[i], original[ELEMENTOS - 1 - i]);
        strcpy(ordenado[i], original[i]);
    }

    
    for (i = 0; i < ELEMENTOS - 1; i++) {
        for (j = 0; j < ELEMENTOS - 1 - i; j++) {
            if (strcmp(ordenado[j], ordenado[j + 1]) > 0) {
                strcpy(auxiliar, ordenado[j]);
                strcpy(ordenado[j], ordenado[j + 1]);
                strcpy(ordenado[j + 1], auxiliar);
            }
        }
    }

    printf("\n=== VECTOR EN ORDEN INVERSO ===\n");
    for (i = 0; i < ELEMENTOS; i++) {
        printf("[%d] %s\n", i + 1, inverso[i]);
    }

    printf("\n=== VECTOR ORDENADO ===\n");
    for (i = 0; i < ELEMENTOS; i++) {
        printf("[%d] %s\n", i + 1, ordenado[i]);
    }

    printf("\nPresione ENTER para salir...");
    getchar();
    return 0;
}
