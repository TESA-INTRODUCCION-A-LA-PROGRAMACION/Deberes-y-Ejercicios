#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <errno.h>
#include <limits.h>

#define MAXIMO 100

/* Lee un entero, rechazando letras, decimales y valores fuera de rango. */
int leerEntero(const char *mensaje, int minimo, int maximo, int *valor) {
    char texto[100];
    char *fin;
    long numero;
    int caracter;

    while (1) {
        printf("%s", mensaje);
        fflush(stdout);
        if (fgets(texto, sizeof(texto), stdin) == NULL) {
            return 0;
        }
        if (strchr(texto, '\n') == NULL) {
            caracter = getchar();
            if (caracter != '\n' && caracter != EOF) {
                while ((caracter = getchar()) != '\n' && caracter != EOF) {
                }
                printf("Error: entrada demasiado larga.\n");
                continue;
            }
        }

        errno = 0;
        numero = strtol(texto, &fin, 10);
        if (fin == texto) {
            printf("Error: ingrese un numero entero.\n");
            continue;
        }
        while (isspace((unsigned char)*fin)) {
            fin++;
        }
        if (errno == ERANGE || *fin != '\0' ||
            numero < minimo || numero > maximo) {
            printf("Error: ingrese un entero entre %d y %d.\n", minimo, maximo);
            continue;
        }
        *valor = (int)numero;
        return 1;
    }
}

void imprimirLista(const char *titulo, int lista[], int cantidad) {
    int i;
    printf("\n%s (%d elementos):\n", titulo, cantidad);
    if (cantidad == 0) {
        printf("No hay numeros en esta lista.\n");
        return;
    }
    printf("[ ");
    for (i = 0; i < cantidad; i++) {
        printf("%d", lista[i]);
        if (i < cantidad - 1) {
            printf(", ");
        }
    }
    printf(" ]\n");
}

int main(void) {
    int original[MAXIMO], pares[MAXIMO], impares[MAXIMO];
    int cantidad, cantidadPares = 0, cantidadImpares = 0;
    int i;
    char mensaje[60];

    printf("=== SEPARAR NUMEROS PARES E IMPARES ===\n");
    if (!leerEntero("Cuantos numeros desea ingresar (1-100): ",
                    1, MAXIMO, &cantidad)) {
        printf("\nError: entrada finalizada.\n");
        return 1;
    }

    for (i = 0; i < cantidad; i++) {
        snprintf(mensaje, sizeof(mensaje), "Ingrese el numero %d: ", i + 1);
        if (!leerEntero(mensaje, INT_MIN, INT_MAX, &original[i])) {
            printf("\nError: no se pudo leer la lista completa.\n");
            return 1;
        }
    }

    /* El resto de dividir entre 2 es cero para los numeros pares. */
    for (i = 0; i < cantidad; i++) {
        if (original[i] % 2 == 0) {
            pares[cantidadPares] = original[i];
            cantidadPares++;
        } else {
            impares[cantidadImpares] = original[i];
            cantidadImpares++;
        }
    }

    imprimirLista("LISTA ORIGINAL", original, cantidad);
    imprimirLista("NUMEROS PARES", pares, cantidadPares);
    imprimirLista("NUMEROS IMPARES", impares, cantidadImpares);

    printf("\nPresione ENTER para salir...");
    getchar();
    return 0;
}
