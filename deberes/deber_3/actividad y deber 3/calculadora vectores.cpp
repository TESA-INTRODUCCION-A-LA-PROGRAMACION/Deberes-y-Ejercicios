#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string original[5];
    string ordenado[5];

    cout << "==================================================" << endl;
    cout << "       PROGRAMA DE VECTORES DE STRINGS" << endl;
    cout << "==================================================\n" << endl;

    cout << "[ INSTRUCCIONES ]" << endl;
    cout << "A continuacion, debe ingresar 5 palabras." << endl;
    cout << "El programa mostrara la lista en orden inverso" << endl;
    cout << "y luego la mostrara ordenada alfabeticamente.\n" << endl;

    cout << "--- INGRESO DE DATOS ---" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Ingrese la palabra " << i + 1 << ": ";
        cin >> original[i];
        ordenado[i] = original[i]; 
    }

    cout << "\n==================================================" << endl;
    cout << "               RESULTADOS OBTENIDOS               " << endl;
    cout << "==================================================" << endl;

    cout << "\n[ 1. VECTOR EN ORDEN INVERSO ]" << endl;
    for (int i = 4; i >= 0; i--) {
        cout << "> " << original[i] << endl;
    }

    sort(ordenado, ordenado + 5);

    cout << "\n[ 2. VECTOR ORDENADO ALFABETICAMENTE ]" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "> " << ordenado[i] << endl;
    }
    cout << "\n==================================================\n" << endl;

    system("pause");
    return 0;
}
