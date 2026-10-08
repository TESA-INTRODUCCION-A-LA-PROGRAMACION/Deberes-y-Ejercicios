#include <cstdio>

// Función para verificar si un número es primo
bool esPrimo(int numero) {
    if (numero <= 1) return false;
    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) return false;
    }
    return true;
}

// Función principal
int main() {
    int numeros[10];
    int primos[10];
    int noPrimos[10];
    
    int cantPrimos = 0;
    int cantNoPrimos = 0;

    printf("=== CLASIFICADOR DE NUMEROS PRIMOS ===\n");
    printf("Ingresa 10 numeros enteros (escribe un numero y presiona Enter):\n\n");

    // Lectura validada de los 10 números
    for (int i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        
        // scanf devuelve 1 si logró leer un número entero correctamente
        while (scanf("%d", &numeros[i]) != 1) {
            printf("Entrada invalida. Ingresa un numero entero para la posicion %d: ", i + 1);
            // Limpia el búfer de entrada para descartar el Enter o caracteres inválidos
            fflush(stdin);
        }
    }

    // Clasificación de los números
    for (int i = 0; i < 10; i++) {
        if (esPrimo(numeros[i])) {
            primos[cantPrimos] = numeros[i];
            cantPrimos++;
        } else {
            noPrimos[cantNoPrimos] = numeros[i];
            cantNoPrimos++;
        }
    }

    // Mostrar lista de números primos
    printf("\n--- NUMEROS PRIMOS (%d) ---\n", cantPrimos);
    if (cantPrimos == 0) {
        printf("No se ingresaron numeros primos.\n");
    } else {
        for (int i = 0; i < cantPrimos; i++) {
            printf("%d ", primos[i]);
        }
        printf("\n");
    }

    // Mostrar lista de números no primos
    printf("\n--- NUMEROS NO PRIMOS (%d) ---\n", cantNoPrimos);
    if (cantNoPrimos == 0) {
        printf("No se ingresaron numeros no primos.\n");
    } else {
        for (int i = 0; i < cantNoPrimos; i++) {
            printf("%d ", noPrimos[i]);
        }
        printf("\n");
    }

    return 0;
}
