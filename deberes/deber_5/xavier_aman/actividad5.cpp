#include <stdio.h>
#include <string.h>

int main() {
    char palabra[100];
    int i, longitud;
    int palindroma = 1;

    printf("Ingresa una palabra en minusculas y sin tildes: ");
    scanf("%99s", palabra);

    longitud = strlen(palabra);

    for (i = 0; i < longitud / 2; i++) {
        if (palabra[i] != palabra[longitud - 1 - i]) {
            palindroma = 0;
        }
    }

    if (palindroma == 1) {
        printf("La palabra es palindroma.\n");
    } else {
        printf("La palabra no es palindroma.\n");
    }

    return 0;
}
