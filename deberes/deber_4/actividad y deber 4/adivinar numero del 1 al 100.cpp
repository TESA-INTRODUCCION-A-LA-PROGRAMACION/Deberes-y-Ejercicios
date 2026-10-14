#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    int numeroSecreto = rand() % 100 + 1;
    int intento;
    bool adivinado = false;

    for (int i = 1; i <= 5; i++) {
        cout << "Intento " << i << " de 5. Ingresa un numero: ";
        cin >> intento;

        if (intento == numeroSecreto) {
            cout << "¡Ganaste! Adivinaste el numero.\n";
            adivinado = true;
            break;
        } else if (intento < numeroSecreto) {
            cout << "El numero a adivinar es mayor.\n";
        } else {
            cout << "El numero a adivinar es menor.\n";
        }
    }

    if (!adivinado) {
        cout << "Perdiste. El numero era: " << numeroSecreto << "\n";
    }

    return 0;
}
