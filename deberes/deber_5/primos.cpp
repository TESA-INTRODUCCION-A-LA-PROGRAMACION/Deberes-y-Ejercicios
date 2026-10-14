#include <iostream>
#include <vector>
using namespace std;

// Función que recibe un número y verifica si es primo
bool esPrimo(int numero) {
    if (numero <= 1) {
        return false;
    }
    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return false;
        }
    }
    return true;
}

// Función principal
int main() {
    vector<int> numeros(10);
    vector<int> primos;
    vector<int> noPrimos;

    cout << "=== SEPARADOR DE NÚMEROS PRIMOS ===" << endl;
    cout << "Ingresa 10 números enteros:" << endl << endl;

    // Pedir los 10 números al usuario
    for (int i = 0; i < 10; i++) {
        cout << "Número " << (i + 1) << ": ";
        cin >> numeros[i];
    }

    // Clasificar cada número
    for (int num : numeros) {
        if (esPrimo(num)) {
            primos.push_back(num);
        } else {
            noPrimos.push_back(num);
        }
    }

    // Mostrar resultados
    cout << endl << "=== RESULTADOS ===" << endl;
    
    cout << "✅ Números primos: ";
    if (primos.empty()) cout << "Ninguno";
    else for (int n : primos) cout << n << " ";
    cout << endl;

    cout << "❌ Números no primos: ";
    if (noPrimos.empty()) cout << "Ninguno";
    else for (int n : noPrimos) cout << n << " ";
    cout << endl;

    return 0;
}
