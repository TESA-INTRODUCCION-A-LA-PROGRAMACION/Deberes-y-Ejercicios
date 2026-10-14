#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

const char* escogerPalabra()
{
    const char* palabras[] = {"perro", "gato", "casa", "computadora", "escuela"};

    int cantidad = 5;
    int posicion = rand() % cantidad;

    return palabras[posicion];
}

int main()
{
    srand(time(NULL));

    const char* palabra = escogerPalabra();
    char intento[50];

    printf("Adivina la palabra\n");
    printf("Ingresa tu palabra: ");
    scanf("%s", intento);

    if (strcmp(intento, palabra) == 0)
    {
        printf("Correcto! Adivinaste la palabra.\n");
    }
    else
    {
        printf("Incorrecto. La palabra era: %s\n", palabra);
    }

    return 0;
}
