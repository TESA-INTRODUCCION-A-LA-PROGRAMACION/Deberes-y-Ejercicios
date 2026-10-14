#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string original[5];
    string inverso[5];
    string ordenado[5];

    // Leer los 5 datos por consola
    for (int i = 0; i < 5; i++) {
        cout << "Ingrese el dato " << (i + 1) << ": ";
        getline(cin, original[i]);
    }

    // Vector inverso
    for (int i = 0; i < 5; i++) {
        inverso[i] = original[4 - i];
    }

    // Vector ordenado (primero se copia el original)
    for (int i = 0; i < 5; i++) {
        ordenado[i] = original[i];
    }
    sort(ordenado, ordenado + 5);

    // Imprimir los dos vectores
    cout << "Vector inverso: ";
    for (int i = 0; i < 5; i++) {
        cout << inverso[i] << " ";
    }

    cout << endl << "Vector ordenado: ";
    for (int i = 0; i < 5; i++) {
        cout << ordenado[i] << " ";
    }
    cout << endl;

    return 0;
}
