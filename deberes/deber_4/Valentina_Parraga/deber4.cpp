#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

void escogerPalabra(char[]);
void escogerPalabra(char palabra[]){
    char lista[5][15] = {"lluvia", "casa", "libro", "playa", "gato"};
    int indice;
    indice=rand()%5;
    strcpy(palabra, lista[indice]);
}
int main(){
    char secreta[15];
    char intento[15];
    int i;
    int acerto=0;

    srand(time(NULL));
    escogerPalabra(secreta);

    for(i=1; i<=5 && acerto==0; i++){
        printf("\nIntento %d de 5, adivina la palabra: ", i);
        scanf("%s", intento);

        if(strcmp(intento, secreta)==0){
            acerto=1;
        }
    }
    
    if(acerto==1){
        printf("\nCorrecto");
    }else{
        printf("\nSe acabaron los intentos, la palabra era %s", secreta);
    }

    getch();
    return 0;
}
