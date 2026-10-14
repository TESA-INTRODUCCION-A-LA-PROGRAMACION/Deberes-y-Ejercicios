#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int numero = rand() % 100 + 1;
    int adivinanza;
    for (int intento = 1; intento <= 5; intento++) {
        cout << "Intento " << intento << "/5 - Ingresa un numero (1-100): ";
        cin >> adivinanza;
        if (adivinanza == numero) {
            cout << "Felicidades! Adivinaste en " << intento << " intento(s)." << endl;
            return 0;
        } else if (adivinanza < numero) {
            cout << "Pista: el numero es MAYOR." << endl;
        } else {
            cout << "Pista: el numero es MENOR." << endl;
        }
    }
    cout << "Se acabaron los intentos. El numero era " << numero << "." << endl;
    return 0;
}
