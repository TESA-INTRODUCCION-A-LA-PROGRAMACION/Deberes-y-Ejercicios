#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int secreto, numero, p;
    int acerto=0;

    srand(time(NULL));
    secreto=rand()%100+1;

    for(p=1; p<=5 && acerto==0; p++){
        printf("Intento %d de 5, ingrese un numero del 1 al 100: ", p);
        scanf("%d", &numero);

        if(numero==secreto){
            acerto=1;
        }else if(numero > secreto){
            printf("Pista: el numero es menor\n");
        }else{
            printf("Pista: el numero es mayor\n");
        }
    }

    if(acerto==1){
        printf("\nCorrecto, adivinaste el numero");
    }else{
        printf("\nSe acabaron los intentos, el numero era %d", secreto);
    }

    getch();
    return 0;
}
