#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

string obtenerPalabra() {
    string lista[] = {"algoritmo", "consola", "teclado", "memoria", "variable"};
    int totalPalabras = 5;
    int indiceAleatorio = rand() % totalPalabras;
    return lista[indiceAleatorio];
}

int main() {
    srand(time(0));
    string palabraSecreta = obtenerPalabra();
    string intento;

    cout << "Pista: La palabra tiene " << palabraSecreta.length() << " letras." << endl;
    cout << "Tiene que ver con hardware o programacion." << endl;
    cout << "Empieza con la letra '" << palabraSecreta[0] << "' y termina con '" << palabraSecreta[palabraSecreta.length() - 1] << "'." << endl;
    cout << "Intenta adivinar la palabra secreta: ";

    while (true) {
        cin >> intento;

        if (intento == palabraSecreta) {
            cout << "Correcto! Adivinaste la palabra." << endl;
            break;
        } else {
            cout << "Incorrecto. Intenta otra vez: ";
        }
    }

    return 0;
}
