#include <cstdio>
#include <cstring>
#include <cctype>
//Angel mejia
const int TAMANO_MAXIMO = 100;

// Devuelve true si el texto se lee igual de izquierda a derecha
// que de derecha a izquierdaa
bool esPalindromo(const char texto[]) {
    int inicio = 0;
    int fin = (int)strlen(texto) - 1;

    while (inicio < fin) {
        if (tolower(texto[inicio]) != tolower(texto[fin])) {
            return false;
        }
        inicio++;
        fin--;
    }
    return true;
}

int main() {
    char texto[TAMANO_MAXIMO];

    printf("Ingresa una palabra: ");
    scanf("%99s", texto);

    if (esPalindromo(texto)) {
        printf("\"%s\" es un palindromo.\n", texto);
    } else {
        printf("\"%s\" no es un palindromo.\n", texto);
    }

    return 0;
}
