#include <cstdio>
#include <cstdlib>
#include <ctime>
//Angel Mejia
const int MIN_NUMERO = 1;
const int MAX_NUMERO = 100;
const int MAX_INTENTOS = 5;

//Aca nos regresa un numero aleatorio entre 1-100
int generarNumeroSecreto() {
    return rand() % (MAX_NUMERO - MIN_NUMERO + 1) + MIN_NUMERO;
}

int main() {
    //Inicializa el generador aleatorio y se elige el numero secreto
    srand((unsigned int)time(NULL));
    int secreto = generarNumeroSecreto();

    printf("Adivina el numero secreto entre %d y %d\n", MIN_NUMERO, MAX_NUMERO);
    printf("Tienes %d intentos.\n", MAX_INTENTOS);

    int adivi;
    int intentos = 0;
    bool gano = false;
	//El usuario empieza a adivinar, si cumple las condiciones gana
    while (intentos < MAX_INTENTOS) {
        printf("Intento %d de %d - Tu respuesta: ", intentos + 1, MAX_INTENTOS);
        scanf("%d", &adivi);
        intentos++;

        if (adivi == secreto) {
            gano = true;
            break;
        } else if (adivi < secreto) {
            printf("Pista: el numero secreto es MAYOR.\n");
        } else {
            printf("Pista: el numero secreto es MENOR.\n");
        }
    }

    if (gano) {
        printf("Correcto! Lo lograste en %d intento(s).\n", intentos);
    } else {
        printf("Perdiste! El numero secreto era %d.\n", secreto);
    }

    return 0;
}
