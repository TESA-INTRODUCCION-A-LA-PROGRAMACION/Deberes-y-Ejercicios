#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string original[5];
    string inverso[5];
    string ordenado[5];
    string auxiliar;

    // Leer las cinco cadenas
    for (int i = 0; i < 5; i++) {
        printf("Ingrese la cadena %d: ", i + 1);
        getline(cin, original[i]);
    }

    // Crear el vector inverso y copiar el original
    for (int i = 0; i < 5; i++) {
        inverso[i] = original[4 - i];
        ordenado[i] = original[i];
    }

    // Ordenar alfabeticamente
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (ordenado[i] > ordenado[j]) {
                auxiliar = ordenado[i];
                ordenado[i] = ordenado[j];
                ordenado[j] = auxiliar;
            }
        }
    }

    printf("\nVector inverso:\n");
    for (int i = 0; i < 5; i++) {
        printf("%s\n", inverso[i].c_str());
    }

    printf("\nVector ordenado:\n");
    for (int i = 0; i < 5; i++) {
        printf("%s\n", ordenado[i].c_str());
    }

    return 0;
}
