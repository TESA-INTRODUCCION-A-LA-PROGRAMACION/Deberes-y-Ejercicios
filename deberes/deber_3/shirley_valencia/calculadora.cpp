#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    // Crear el vector de 5 elementos tipo String
    vector<string> original(5);
    
    cout << "=== Programa de Vectores ===" << endl;
    cout << "Ingresa 5 palabras o frases:" << endl;
    
    // Leer los 5 elementos por consola
    for (int i = 0; i < 5; i++) {
        cout << "Elemento " << (i + 1) << ": ";
        getline(cin, original[i]);
    }
    
    // Crear el vector inverso
    vector<string> inverso(original.rbegin(), original.rend());
    
    // Crear el vector ordenado
    vector<string> ordenado = original;
    sort(ordenado.begin(), ordenado.end());
    
    // Mostrar resultados
    cout << "\n========== VECTOR ORIGINAL ==========" << endl;
    for (int i = 0; i < original.size(); i++) {
        cout << "[" << i << "] " << original[i] << endl;
    }
    
    cout << "\n========== VECTOR INVERSO ==========" << endl;
    for (int i = 0; i < inverso.size(); i++) {
        cout << "[" << i << "] " << inverso[i] << endl;
    }
    
    cout << "\n========== VECTOR ORDENADO ==========" << endl;
    for (int i = 0; i < ordenado.size(); i++) {
        cout << "[" << i << "] " << ordenado[i] << endl;
    }
    
    return 0;
}
