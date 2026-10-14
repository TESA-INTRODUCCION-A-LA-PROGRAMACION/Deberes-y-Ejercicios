#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <errno.h>
#include <limits.h>

#define CANTIDAD 10

/* Comprueba si un entero es primo. */
int esPrimo(int numero) {
    int divisor;
    if (numero < 2) {
        return 0;
    }
    /* Esta condicion evita desbordar al calcular divisor * divisor. */
    for (divisor = 2; divisor <= numero / divisor; divisor++) {
        if (numero % divisor == 0) {
            return 0;
        }
    }
    return 1;
}

/* Recibe el arreglo de diez enteros y crea las dos listas. */
void clasificarNumeros(int numeros[], int primos[], int noPrimos[],
                       int *cantidadPrimos, int *cantidadNoPrimos) {
    int i;
    *cantidadPrimos = 0;
    *cantidadNoPrimos = 0;
    for (i = 0; i < CANTIDAD; i++) {
        if (esPrimo(numeros[i])) {
            primos[*cantidadPrimos] = numeros[i];
            (*cantidadPrimos)++;
        } else {
            noPrimos[*cantidadNoPrimos] = numeros[i];
            (*cantidadNoPrimos)++;
        }
    }
}

/* Lee un entero completo y rechaza letras, decimales y desbordamientos. */
int leerEntero(int posicion, int *resultado) {
    char texto[100], *fin;
    long valor;
    int caracter;
    while (1) {
        printf("Ingrese el numero %d de %d: ", posicion, CANTIDAD);
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
        valor = strtol(texto, &fin, 10);
        if (fin == texto) {
            printf("Error: debe ingresar un numero entero.\n");
            continue;
        }
        while (isspace((unsigned char)*fin)) {
            fin++;
        }
        if (errno == ERANGE || *fin != '\0' || valor < INT_MIN || valor > INT_MAX) {
            printf("Error: ingrese un entero entre %d y %d.\n", INT_MIN, INT_MAX);
            continue;
        }
        *resultado = (int)valor;
        return 1;
    }
}

void imprimirLista(const char *titulo, int lista[], int cantidad) {
    int i;
    printf("\n%s:\n", titulo);
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
    int numeros[CANTIDAD], primos[CANTIDAD], noPrimos[CANTIDAD];
    int cantidadPrimos, cantidadNoPrimos;
    int i;

    printf("=== DEBER 5: NUMEROS PRIMOS Y NO PRIMOS ===\n");
    printf("Ingrese diez numeros enteros, uno por linea.\n\n");
    for (i = 0; i < CANTIDAD; i++) {
        if (!leerEntero(i + 1, &numeros[i])) {
            printf("\nError: no se pudieron leer los diez numeros.\n");
            return 1;
        }
    }

    clasificarNumeros(numeros, primos, noPrimos, &cantidadPrimos, &cantidadNoPrimos);
    imprimirLista("PRIMOS", primos, cantidadPrimos);
    imprimirLista("NO PRIMOS", noPrimos, cantidadNoPrimos);

    printf("\nPresione ENTER para salir...");
    getchar();
    return 0;
}
