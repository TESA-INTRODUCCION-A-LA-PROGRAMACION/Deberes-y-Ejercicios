#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int esPrimo(int numero)
{
    if (numero < 2)
        return 0;

    for (int i = 2; i < numero; i++)
    {
        if (numero % i == 0)
            return 0;
    }

    return 1;
}

void separarPrimos(int numeros[], int primos[], int noPrimos[])
{
    int p = 0;
    int np = 0;

    for (int i = 0; i < 10; i++)
    {
        if (esPrimo(numeros[i]))
        {
            primos[p] = numeros[i];
            p++;
        }
        else
        {
            noPrimos[np] = numeros[i];
            np++;
        }
    }

    printf("\nLista de Primos:\n");
    for (int i = 0; i < p; i++)
    {
        printf("%d ", primos[i]);
    }

    printf("\n\nLista de No Primos:\n");
    for (int i = 0; i < np; i++)
    {
        printf("%d ", noPrimos[i]);
    }
}

int main()
{
    int numeros[10];
    int primos[10];
    int noPrimos[10];
    char entrada[50];
    char extra;

    printf("Ingrese 10 numeros enteros:\n");

    for (int i = 0; i < 10; i++)
    {
        while (1)
        {
            printf("Numero %d: ", i + 1);
            scanf("%49s", entrada);

            if (sscanf(entrada, "%d %c", &numeros[i], &extra) == 1)
            {
                break;
            }

            printf("Error debe ingresar un numero entero.\n");
        }
    }

    separarPrimos(numeros, primos, noPrimos);

    return 0;
}
