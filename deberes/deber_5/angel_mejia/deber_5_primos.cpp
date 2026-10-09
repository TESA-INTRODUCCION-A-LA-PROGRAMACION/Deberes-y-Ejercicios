#include <cstdio>

const int TAMANO = 10;
//Angel Mejia
// Devuelve true si el numero es primo, false si no lo es.
bool esPrimo(int n) {
    if (n < 2) {
        return false;  
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

// Recibe un arreglo de 10 enteros y los separa en primos y no primos
void clasificarNumeros(const int numeros[], int primos[], int &cantidadPrimos,
                       int noPrimos[], int &cantidadNoPrimos) {
    cantidadPrimos = 0;
    cantidadNoPrimos = 0;

    for (int i = 0; i < TAMANO; i++) {
        if (esPrimo(numeros[i])) {
            primos[cantidadPrimos] = numeros[i];
            cantidadPrimos++;
        } else {
            noPrimos[cantidadNoPrimos] = numeros[i];
            cantidadNoPrimos++;
        }
    }
}

int main() {
    int numeros[TAMANO];
    int primos[TAMANO];
    int noPrimos[TAMANO];
    int cantidadPrimos;
    int cantidadNoPrimos;

    printf("Ingresa %d numeros enteros:\n", TAMANO);
    for (int i = 0; i < TAMANO; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    clasificarNumeros(numeros, primos, cantidadPrimos, noPrimos, cantidadNoPrimos);

    printf("\nPrimos (%d):\n", cantidadPrimos);
    if (cantidadPrimos == 0) {
        printf("(ninguno)\n");
    }
    for (int i = 0; i < cantidadPrimos; i++) {
        printf("%d\n", primos[i]);
    }

    printf("\nNo primos (%d):\n", cantidadNoPrimos);
    if (cantidadNoPrimos == 0) {
        printf("(ninguno)\n");
    }
    for (int i = 0; i < cantidadNoPrimos; i++) {
        printf("%d\n", noPrimos[i]);
    }

    return 0;
}
