#include <iostream>
#include <cstdlib> // Para rand(), srand() y system()
#include <ctime>   // Para time()

int main() {
    // Inicializar la semilla para generar números aleatorios diferentes en cada ejecución
    std::srand(std::time(0));

    char opcion;

    do {
        // Limpiar la pantalla
        #ifdef _WIN32
            std::system("cls");
        #else
            std::system("clear");
        #endif

        // Generar un número aleatorio entre 1 y 100
        int numeroSecreto = std::rand() % 100 + 1;
        int intentoUsuario = 0;
        int intentosRestantes = 5;
        bool adivino = false;

        std::cout << "========================================\n";
        std::cout << "     JUEGO: ADIVINA EL NUMERO (1-100)   \n";
        std::cout << "========================================\n";
        std::cout << "Tienes 5 intentos para adivinar el numero secreto.\n\n";

        // Bucle para los 5 intentos
        while (intentosRestantes > 0 && !adivino) {
            std::cout << "Intentos restantes [" << intentosRestantes << "]. Ingresa tu numero: ";
            std::cin >> intentoUsuario;

            if (intentoUsuario == numeroSecreto) {
                adivino = true;
            } else if (intentoUsuario < numeroSecreto) {
                std::cout << "-> PISTA: El numero secreto es MAYOR.\n\n";
            } else {
                std::cout << "-> PISTA: El numero secreto es MENOR.\n\n";
            }

            intentosRestantes--;
        }

        // Mensaje final del juego
        std::cout << "----------------------------------------\n";
        if (adivino) {
            std::cout << "¡FELICIDADES! ¡Adivinaste el numero secreto (" << numeroSecreto << ")!\n";
        } else {
            std::cout << "¡GAME OVER! Se te acabaron los intentos.\n";
            std::cout << "El numero secreto era: " << numeroSecreto << "\n";
        }

        // Preguntar si desea volver a jugar
        std::cout << "========================================\n";
        std::cout << "¿Deseas jugar otra vez? (s/n): ";
        std::cin >> opcion;

    } while (opcion == 's' || opcion == 'S');

    std::cout << "\n¡Gracias por jugar! Hasta pronto.\n";

    return 0;
}
