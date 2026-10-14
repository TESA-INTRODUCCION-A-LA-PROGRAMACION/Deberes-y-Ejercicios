#include <iostream>
using namespace std;

void verificarArreglo(int arr[], bool resultados[]) {
    for(int i = 0; i < 10; i++) {
        int n = arr[i];
        resultados[i] = true;
        
        if (n <= 1) {
            resultados[i] = false;
        } else {
            for (int j = 2; j < n; j++) {
                if (n % j == 0) {
                    resultados[i] = false;
                    break;
                }
            }
        }
    }
}

int main() {
    int numeros[10];
    bool son_primos[10];

    for(int i = 0; i < 10; i++) {
        cout << "Ingrese el numero " << i + 1 << ": ";
        cin >> numeros[i];
    }

    verificarArreglo(numeros, son_primos);

    cout << "\nPrimos:" << endl;
    for(int i = 0; i < 10; i++) {
        if(son_primos[i] == true) {
            cout << numeros[i] << endl;
        }
    }

    cout << "\nNo primos:" << endl;
    for(int i = 0; i < 10; i++) {
        if(son_primos[i] == false) {
            cout << numeros[i] << endl;
        }
    }

    return 0;
}
