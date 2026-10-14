#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, numero;
    vector<int> listaOriginal;
    vector<int> pares;
    vector<int> impares;

    cout << "Ingresa la cantidad de numeros para la lista: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Ingresa el numero " << (i + 1) << ": ";
        cin >> numero;
        listaOriginal.push_back(numero);

        if (numero % 2 == 0) {
            pares.push_back(numero);
        } else {
            impares.push_back(numero);
        }
    }

    cout << "\n--- Resultados ---" << endl;
    
    cout << "Lista de numeros PARES: ";
    for (int i = 0; i < pares.size(); i++) {
        cout << pares[i] << " ";
    }
    cout << endl;

    cout << "Lista de numeros IMPARES: ";
    for (int i = 0; i < impares.size(); i++) {
        cout << impares[i] << " ";
    }
    cout << endl;

    return 0;
}
