#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <errno.h>
#include <time.h>

#define MAX_INTENTOS 5

/* Lee un entero del 1 al 100. Las entradas invalidas no gastan intentos. */
int leerNumero(int *numero) {
    char texto[100];
    char *fin;
    long valor;
    int caracter;

    while (1) {
        printf("Ingrese un numero del 1 al 100: ");
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
            printf("Error: escriba un numero entero.\n");
            continue;
        }
        while (isspace((unsigned char)*fin)) {
            fin++;
        }
        if (errno == ERANGE || *fin != '\0' || valor < 1 || valor > 100) {
            printf("Error: escriba un entero entre 1 y 100.\n");
            continue;
        }
        *numero = (int)valor;
        return 1;
    }
}

int main(void) {
    int secreto, numero;
    int intento;
    int acerto = 0;

    srand((unsigned int)time(NULL));
    secreto = rand() % 100 + 1;

    printf("=== ACTIVIDAD 4: ADIVINA EL NUMERO ===\n");
    printf("He elegido un numero al azar entre 1 y 100.\n");
    printf("Tiene solamente %d intentos para adivinarlo.\n", MAX_INTENTOS);
    printf("Las entradas invalidas no cuentan como intentos.\n\n");

    for (intento = 1; intento <= MAX_INTENTOS; intento++) {
        printf("Intento %d de %d\n", intento, MAX_INTENTOS);
        if (!leerNumero(&numero)) {
            printf("\nEntrada finalizada. Fin del juego.\n");
            return 0;
        }

        if (numero == secreto) {
            printf("\nCorrecto! El numero era %d.\n", secreto);
            printf("Lo adivino en %d intento(s).\n", intento);
            acerto = 1;
            break;
        } else if (numero > secreto) {
            printf("Su numero es mayor que el secreto. Pruebe uno menor.\n");
        } else {
            printf("Su numero es menor que el secreto. Pruebe uno mayor.\n");
        }

        if (intento < MAX_INTENTOS) {
            printf("Le quedan %d intento(s).\n\n", MAX_INTENTOS - intento);
        }
    }

    if (!acerto) {
        printf("\nSe terminaron los cinco intentos.\n");
        printf("El numero secreto era: %d.\n", secreto);
    }

    printf("\nPresione ENTER para salir...");
    getchar();
    return 0;
}
