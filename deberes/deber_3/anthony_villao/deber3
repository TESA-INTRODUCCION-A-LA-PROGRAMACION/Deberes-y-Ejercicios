#include <iostream>
#include <string>
#include <algorithm>  
using namespace std;

const int N = 5;

int main() {
    string original[N];   
    string inverso[N];    
    string ordenado[N]; 
    int i;

    cout << "Ingrese " << N << " cadenas de texto:" << endl;
    for (i = 0; i < N; i++) {
        cout << "Elemento " << i + 1 << ": ";
        getline(cin, original[i]);
    }

    for (i = 0; i < N; i++) {
        inverso[i] = original[N - 1 - i];
    }

    for (i = 0; i < N; i++) {
        ordenado[i] = original[i];
    }
    sort(ordenado, ordenado + N);

    cout << endl << "Vector inverso:" << endl;
    for (i = 0; i < N; i++) {
        cout << "[" << i << "] " << inverso[i] << endl;
    }

    cout << endl << "Vector ordenado:" << endl;
    for (i = 0; i < N; i++) {
        cout << "[" << i << "] " << ordenado[i] << endl;
    }

    return 0;
}
