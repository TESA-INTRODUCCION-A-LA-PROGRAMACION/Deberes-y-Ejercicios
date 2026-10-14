#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char palabra[50];
    int esPalindroma;
    int longitud;
    int valida;

    do {
        valida = 1;

        printf("Ingrese una palabra: ");
        scanf("%49s", palabra);

        for (int i = 0; palabra[i] != '\0'; i++) {
            if (!isalpha((unsigned char)palabra[i])) {
                valida = 0;
                break;
            }
        }

        if (valida == 0) {
            printf("Error ingrese solo letras.\n\n");
        }

    } while (valida == 0);

    longitud = strlen(palabra);
    esPalindroma = 1;

    for (int i = 0; i < longitud / 2; i++) {
        if (tolower((unsigned char)palabra[i]) != tolower((unsigned char)palabra[longitud - 1 - i])) {
            esPalindroma = 0;
            break;
        }
    }

    if (esPalindroma == 1) {
        printf("La palabra es palindroma.\n");
    } else {
        printf("La palabra no es palindroma.\n");
    }

    return 0;
}
