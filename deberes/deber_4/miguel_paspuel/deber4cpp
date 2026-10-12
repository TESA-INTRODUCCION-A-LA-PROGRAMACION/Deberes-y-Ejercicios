
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

// Funcion que escoge una palabra aleatoria
string escogerPalabra() {
    string palabras[5] = {"perro", "gato", "casa", "arbol", "libro"};

    int numero = rand() % 5;

    return palabras[numero];
}

int main() {
    srand(time(0));

    string palabraSecreta;
    string intento;

    palabraSecreta = escogerPalabra();

    cout << "=== JUEGO DE ADIVINAR PALABRAS ===" << endl;
    cout << "Adivina la palabra secreta." << endl;

    cout << "Pista: es una palabra de uso comun." << endl;
    cout << "Escribe tu respuesta: ";
    cin >> intento;

    if (intento == palabraSecreta) {
        cout << "Correcto! Adivinaste la palabra." << endl;
    } else {
        cout << "Incorrecto. La palabra era: "
             << palabraSecreta << endl;
    }

    return 0;
}
