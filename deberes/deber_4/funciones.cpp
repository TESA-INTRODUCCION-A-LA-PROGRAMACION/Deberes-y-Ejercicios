#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

// Función que crea la lista y elige una palabra al azar
string elegirPalabraAleatoria() {
    vector<string> palabras = {
        "computadora",
        "programacion",
        "estudiante",
        "tecnologia",
        "inteligencia",
        "desarrollo",
        "internet",
        "escuela"
    };
    
    srand(time(0)); // Inicializar el generador aleatorio
    int indice = rand() % palabras.size();
    return palabras[indice];
}

// Función principal
int main() {
    cout << "=== JUEGO DE ADIVINAR LA PALABRA ===" << endl;
    cout << "Ya elegí una palabra al azar. ¡Intenta adivinarla!" << endl << endl;
    
    string palabraSecreta = elegirPalabraAleatoria();
    string intento;
    int oportunidades = 3;
    
    while (oportunidades > 0) {
        cout << "Te quedan " << oportunidades << " oportunidades." << endl;
        cout << "Escribe tu adivinanza: ";
        cin >> intento;
        
        if (intento == palabraSecreta) {
            cout << endl << "🎉 ¡¡¡CORRECTO!!! ¡Felicidades, adivinaste!" << endl;
            return 0;
        } else {
            oportunidades--;
            if (oportunidades > 0) {
                cout << "❌ Incorrecto. Intenta otra vez." << endl << endl;
            }
        }
    }
    
    cout << endl << "😔 Se acabaron tus oportunidades." << endl;
    cout << "La palabra era: " << palabraSecreta << endl;
    
    return 0;
}
