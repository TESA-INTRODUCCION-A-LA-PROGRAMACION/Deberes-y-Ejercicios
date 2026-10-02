#include <cstdio>
#include <cstdlib>
// Angel Mejia
/* Lee un entero que sea valido; 
si la entrada es invalida, la descarta y vuelve a pedir
un dato valido*/
int leerEntero(const char* mensaje) {
    int valor;
    char c;
    while (true) {
        printf("%s", mensaje);
        int r = scanf("%d%c", &valor, &c);

        if (r == 2 && c == '\n') {
            return valor;
        }
        if (r == EOF) {
            exit(1);
        }

        int ch = (r == 2) ? c : 0;
        while (ch != '\n' && ch != EOF) {
            ch = getchar();
        }
        printf("Entrada invalida. Ingresa solo numeros enteros.\n");
    }
}
/* Despues de validar los datos nos pide ingresar el numero
de datos totales*/

int main() {
    int n;
    do {
        n = leerEntero("Cuantos numeros vas a ingresar (1-100)? ");
        if (n < 1 || n > 100) {
            printf("Debe ser un valor entre 1 y 100.\n");
        }
    } while (n < 1 || n > 100);

    int numeros[100];
    int pares[100];
    int impares[100];
    int cantPares = 0;
    int cantImpares = 0;

    for (int i = 0; i < n; i++) {
        char mensaje[30];
        snprintf(mensaje, sizeof(mensaje), "Numero %d: ", i + 1);
        numeros[i] = leerEntero(mensaje);
    }

    for (int i = 0; i < n; i++) {
        if (numeros[i] % 2 == 0) {
            pares[cantPares++] = numeros[i];
        } else {
            impares[cantImpares++] = numeros[i];
        }
    }

// Imprimir las listas segun los requirimientos
    printf("\nLista original: ");
    for (int i = 0; i < n; i++) printf("%d ", numeros[i]);

    printf("\nNumeros pares: ");
    for (int i = 0; i < cantPares; i++) printf("%d ", pares[i]);

    printf("\nNumeros impares: ");
    for (int i = 0; i < cantImpares; i++) printf("%d ", impares[i]);

    printf("\n");
    return 0;
}
