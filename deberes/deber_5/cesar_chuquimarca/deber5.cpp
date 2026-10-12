#include <iostream>
#include <vector>

using namespace std;

// Función que recibe un número entero y determina si es primo o no
bool esPrimo(int numero) {
    if (numero <= 1) {
        return false; // Los números menores o iguales a 1 no son primos
    }
    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return false; // Si es divisible por algún número, no es primo
        }
    }
    return true; // Si no encontró divisores, es primo
}

int main() {
    

    const int TAMANIO = 10;
    int numeros[TAMANIO];
    
    // Vectores dinámicos para almacenar las dos listas de resultados
    vector<int> primos;
    vector<int> noPrimos;

    // 1. Pedir al usuario que ingrese los 10 números enteros
    cout << "Por favor, ingrese 10 numeros enteros:" << endl;
    for (int i = 0; i < TAMANIO; i++) {
        cout << "Numero " << (i + 1) << ": ";
        cin >> numeros[i];
    }

    // 2. Procesar el arreglo original llamando a la función esPrimo
    for (int i = 0; i < TAMANIO; i++) {
        if (esPrimo(numeros[i])) {
            primos.push_back(numeros[i]); // Añadir a la lista de primos
        } else {
            noPrimos.push_back(numeros[i]); // Añadir a la lista de no primos
        }
    }

    // 3. Mostrar los resultados en dos listas diferentes
    cout << "\n========================================" << endl;
    cout << "               RESULTADOS               " << endl;
    cout << "========================================" << endl;

    // Lista de números Primos
    cout << "\n--- LISTA DE NUMEROS PRIMOS ---" << endl;
    if (primos.empty()) {
        cout << "No se ingresaron numeros primos." << endl;
    } else {
        for (int i = 0; i < primos.size(); i++) {
            cout << "[ " << primos[i] << " ] ";
        }
        cout << endl;
    }

    // Lista de números No Primos
    cout << "\n--- LISTA DE NUMEROS NO PRIMOS ---" << endl;
    if (noPrimos.empty()) {
        cout << "No se ingresaron numeros que no fueran primos." << endl;
    } else {
        for (int i = 0; i < noPrimos.size(); i++) {
            cout << "[ " << noPrimos[i] << " ] ";
        }
        cout << endl;
    }

    cout << "\n========================================" << endl;

    return 0;
}
