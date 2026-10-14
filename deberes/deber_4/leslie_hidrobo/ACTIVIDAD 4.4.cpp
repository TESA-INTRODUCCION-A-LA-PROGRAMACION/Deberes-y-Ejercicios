#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int numero, intento;
    char entrada[50];
    char extra;

    srand(time(NULL));

    numero = rand() % 100 + 1;

    printf("ADIVINA EL NUMERO\n");
    printf("Tienes 5 intentos para adivinar un numero entre 1 y 100.\n\n");

    for (int i = 1; i <= 5; i++)
    {
        while (1)
        {
            printf("Intento %d: ", i);
            scanf("%49s", entrada);

            if (sscanf(entrada, "%d %c", &intento, &extra) == 1)
            {
                if (intento >= 1 && intento <= 100)
                {
                    break;
                }
            }

            printf("Error ingresa un numero entero entre 1 y 100.\n");
        }

        if (intento == numero)
        {
            printf("Correcto! Adivinaste el numero.\n");
            printf("Lo lograste en %d intento(s).\n", i);
            return 0;
        }
        else if (intento < numero)
        {
            printf("Pista: el numero a adivinar es MAYOR.\n\n");
        }
        else
        {
            printf("Pista: el numero a adivinar es MENOR.\n\n");
        }
    }

    printf("Se terminaron los 5 intentos.\n");
    printf("El numero era: %d\n", numero);

    return 0;
}
