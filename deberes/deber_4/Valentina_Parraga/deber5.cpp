#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void ingresar(int[]);
int esPrimo(int);
void separar(int[], int[], int[], int[]);
void ingresar(int vector[]){
    int v, j, valido;
    char texto[20];
    for(v=0;v<10;v++){
        do{
            valido=1;
            printf("Ingrese el numero %d: ", v+1);
            scanf("%19s", texto);

            j=0;
            if(texto[0]=='-'){
                j=1;
            }
            if(texto[j]=='\0'){
                valido=0;
            }
            for(;texto[j]!= '\0';j++){
                if(texto[j] <'0' || texto[j] > '9'){
                    valido=0;
                }
            }

            if(valido==0){
                printf("Error: debe ingresar un numero entero\n");
            }
        }while(valido==0);

        vector[v]=atoi(texto);
    }
}
int esPrimo(int numero){
    int v;
    if(numero < 2){
        return 0;
    }
    for(v=2;v<numero;v++){
        if(numero % v==0){
            return 0;
        }
    }
    return 1;
}
void separar(int vector[], int primos[], int noPrimos[], int contador[]){
    int v;
    contador[0]=0;
    contador[1]=0;
    for(v=0;v<10;v++){
        if(esPrimo(vector[v])==1){
            primos[contador[0]]=vector[v];
            contador[0]++;
        }else{
            noPrimos[contador[1]] = vector[v];
            contador[1]++;
        }
    }
}

int main(){
    int vector[10];
    int primos[10];
    int noPrimos[10];
    int contador[2];
    int v;

    ingresar(vector);
    separar(vector, primos, noPrimos, contador);

    printf("\nPrimos:");
    for(v=0;v<contador[0];v++){
        printf("\n%d", primos[v]);
    }

    printf("\n\nNo primos:");
    for(v=0;v<contador[1];v++){
        printf("\n%d", noPrimos[v]);
    }

    getch();
    return 0;
}
