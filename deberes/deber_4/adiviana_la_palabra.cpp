#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

string elegirPalabra() {
    string palabras[6] = {"gato", "python", "java", "variable", "messi", "chamba"};
    return palabras[rand() % 6];
}

int main() {
    srand(time(0));
    string secreta = elegirPalabra(), intento;
    int intentos = 0;
    cout << "La palabra tiene " << secreta.length() << " letras." << endl;
    do {
        cout << "Adivina la palabra1: ";
        cin >> intento;
        intentos++;
        if (intento != secreta)
            cout << "Incorrecto, intenta de nuevo." << endl;
    } while (intento != secreta);
    cout << "Correcto! Lo lograste en " << intentos << " intento(s)." << endl;
    system("pause");
    return 0;
}
