#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numero_secreto,intento,i;
    int adivinado=0;

    srand(time(NULL));
    numero_secreto=rand()%100+1;

    printf("ADIVINA EL NUMERO (1 al 100)\n");
    printf("Tienes 5 intentos para adivinar.\n\n");

    for(i=1;i<=5;i++) {
        printf("Intento %d/5 => ",i);
        scanf("%d",&intento);

        if(intento==numero_secreto) {
            printf("\nFelicidades! Adivinaste el numero.\n");
            adivinado=1;
            break;
        } else if(intento>numero_secreto) {
            printf("El numero secreto es MENOR.\n\n");
        } else {
            printf("El numero secreto es MAYOR.\n\n");
        }
    }

    if(!adivinado) {
        printf("Se te acabaron los intentos. El numero era: %d\n",numero_secreto);
    }

    return 0;
}
