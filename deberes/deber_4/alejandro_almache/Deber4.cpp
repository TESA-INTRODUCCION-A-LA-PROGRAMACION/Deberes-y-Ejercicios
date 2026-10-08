#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <cctype>

using namespace std;

// Función que define la lista y devuelve una palabra elegida al azar
string obtenerPalabraAleatoria() {
    string palabras[] = {
        "GATO",
        "PERRO",
        "CASA",
        "ARBOL",
        "SOL",
        "MUNDO"
    };

    int totalPalabras = 6;
    int indice = rand() % totalPalabras;
    return palabras[indice];
}

int main() {
    // Inicializar el generador de números aleatorios
    srand(time(0));

    // Obtener la palabra a adivinar
    string palabraOculta = obtenerPalabraAleatoria();
    int longitud = palabraOculta.length();

    // Crear un arreglo para mostrar el progreso (ejemplo: _ _ _ _)
    char progreso[50];
    for (int i = 0; i < longitud; i++) {
        progreso[i] = '_';
    }
    progreso[longitud] = '\0'; // Fin de cadena de texto

    int intentos = 5;
    char letra;
    bool adivino = false;

    printf("=== JUEGO DE ADIVINAR LA PALABRA ===\n");
    printf("Tienes %d intentos.\n\n", intentos);

    while (intentos > 0 && !adivino) {
        // Mostrar la palabra oculta con espacios
        printf("Palabra: ");
        for (int i = 0; i < longitud; i++) {
            printf("%c ", progreso[i]);
        }
        printf("\nIntentos restantes: %d\n", intentos);

        // Pedir letra al usuario
        printf("Ingresa una letra (mayuscula): ");
        scanf(" %c", &letra); // El espacio antes de %c ignora el Enter previo

        letra = toupper(letra);
        bool acierto = false;

        // Comprobar si la letra coincide con alguna posición
        for (int i = 0; i < longitud; i++) {
            if (palabraOculta[i] == letra) {
                progreso[i] = letra;
                acierto = true;
            }
        }

        if (acierto) {
            printf("¡Correcto! La letra '%c' esta en la palabra.\n", letra);
        } else {
            printf("La letra '%c' no esta en la palabra.\n", letra);
            intentos--;
        }

        // Verificar si completó la palabra
        if (strcmp(progreso, palabraOculta.c_str()) == 0) {
            adivino = true;
        }

        printf("-----------------------------------\n");
    }

    // Resultado final
    if (adivino) {
        printf("\n¡Felicidades! Adivinaste la palabra: %s\n", palabraOculta.c_str());
    } else {
        printf("\n¡Perdiste! La palabra era: %s\n", palabraOculta.c_str());
    }

    return 0;
}
