#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void obtener_palabra(char palabra[]) {
    char lista[5][50]={"computadora","teclado","programa","sistema","pantalla"};
    int indice=rand()%5;
    strcpy(palabra,lista[indice]);
}

int main() {
    char palabra_secreta[50];
    char intento[50];
    int tam;

    srand(time(NULL));

    obtener_palabra(palabra_secreta);
    tam=strlen(palabra_secreta);

    printf("ADIVINA LA PALABRA\n\n");
    printf("PISTA: La palabra tiene %d letras y empieza con '%c'\n\n",tam,palabra_secreta[0]);

    do {
        printf("Ingrese la palabra => ");
        scanf("%s",intento);

        if(strcmp(intento,palabra_secreta)!=0) {
            printf("Incorrecto, intenta de nuevo.\n\n");
        }
    } while(strcmp(intento,palabra_secreta)!=0);

    printf("\nFelicidades! Adivinaste la palabra.\n");

    return 0;
}
