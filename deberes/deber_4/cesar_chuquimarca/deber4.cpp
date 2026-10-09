#include <iostream>
#include <vector>
#include <string>
#include <cstdlib> // Necesaria para rand() y srand()
#include <ctime>   // Necesaria para time()

using namespace std;

// Función que crea la lista de palabras y retorna una al azar
string obtenerPalabraAleatoria() {
    vector<string> palabras = {"programacion", "computadora", "codigo", "sistema", "variable", "funcion"};
    
    // Generar un índice aleatorio basado en el tamaño del vector
    int indiceAleatorio = rand() % palabras.size();
    
    return palabras[indiceAleatorio];
}

int main() {
    // Inicializar la semilla de los números aleatorios
    srand(time(0));
    
    string palabraSecreta = obtenerPalabraAleatoria();
    string intentoUsuario = ""; // Variable corregida sin espacios
    int intentos = 0;
    const int MAX_INTENTOS = 10; // Límite de intentos establecido
    bool adivino = false;
    
    cout << "=========================================" << endl;
    cout << " BIENVENIDO AL JUEGO DE ADIVINAR LA PALABRA! " << endl;
    cout << "=========================================" << endl;
    cout << "Pista: La palabra tiene " << palabraSecreta.length() << " letras." << endl;
    cout << "Tienes un maximo de " << MAX_INTENTOS << " intentos para lograrlo.\n" << endl;
    
    // El bucle se ejecuta mientras no adivine y no supere el límite de intentos
    while (intentos < MAX_INTENTOS) {
        intentos++;
        cout << "Intento #" << intentos << " de " << MAX_INTENTOS << " - Ingresa tu palabra: ";
        cin >> intentoUsuario;
        
        if (intentoUsuario == palabraSecreta) {
            adivino = true;
            break; // Rompe el ciclo inmediatamente si acierta
        } else {
            cout << "Incorrecto. ";
            if (intentos < MAX_INTENTOS) {
                cout << "Te quedan " << (MAX_INTENTOS - intentos) << " intentos." << endl;
                
                // Pistas de longitud para ayudar al usuario
                if (intentoUsuario.length() < palabraSecreta.length()) {
                    cout << "(Ayuda: La palabra secreta es mas LARGA que tu intento)" << endl;
                } else if (intentoUsuario.length() > palabraSecreta.length()) {
                    cout << "(Ayuda: La palabra secreta es mas CORTA que tu intento)" << endl;
                }
            }
            cout << "-----------------------------------------" << endl;
        }
    }
    
    // Mensajes finales fuera del ciclo
    if (adivino) {
        cout << "\n Felicidades! Adivinaste la palabra correctamente." << endl;
        cout << "Te tomo " << intentos << " intento(s)." << endl;
    } else {
        cout << "\n Game Over! Te has quedado sin intentos." << endl;
        cout << "La palabra secreta era: " << palabraSecreta << endl;
    }
    
    return 0;
}
