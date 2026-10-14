#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

string escogerPalabra() {
    vector<string> palabras(5);

    palabras[0] = "computadora";
    palabras[1] = "programacion";
    palabras[2] = "teclado";
    palabras[3] = "internet";
    palabras[4] = "molinodeviento";

    int posicion = rand() % palabras.size();

    return palabras[posicion];
}

int main() {
    srand(time(0));

    string palabraSecreta;
    string intento;

    palabraSecreta = escogerPalabra();

    cout << "¡Adivina la palabra!" << endl;

    do {
        cout << "Escribe tu respuesta: ";
        cin >> intento;

        if (intento == palabraSecreta) {
            cout << "¡Correcto! Has adivinado la palabra." << endl;
        } else {
            cout << "Incorrecto. Intenta nuevamente." << endl;
        }

    } while (intento != palabraSecreta);

    return 0;
}
