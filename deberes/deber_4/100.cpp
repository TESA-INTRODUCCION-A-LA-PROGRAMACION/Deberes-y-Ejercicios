#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define INTENTOS 5

int main()
{
    int numeroSecreto;
    int numeroUsuario;
    int i;
    int acierto = 0;

    srand(time(NULL));

    numeroSecreto = rand() % 100 + 1;

    printf("Adivina el numero entre 1 y 100\n");
    printf("Tienes %d intentos.\n\n", INTENTOS);

    for (i = 1; i <= INTENTOS; i++)
    {
        printf("Intento %d: ", i);
        scanf("%d", &numeroUsuario);

        if (numeroUsuario == numeroSecreto)
        {
            printf("¡Felicidades! Adivinaste el numero.\n");
            acierto = 1;
            break;
        }
        else if (numeroUsuario < numeroSecreto)
        {
            printf("Pista: el numero es mayor a ese numero.\n\n");
        }
        else
        {
            printf("Pista: el numero es menor a ese numero.\n\n");
        }
    }

    if (acierto == 0)
    {
        printf("Se acabaron los intentos.\n");
        printf("El numero era: %d\n", numeroSecreto);
    }

    return 0;
}
