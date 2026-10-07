#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char texto[50];
    int v, largo;
    int palindroma=1;

    printf("Ingrese una palabra: ");
    scanf("%49s", texto);
    largo=strlen(texto);

    for(v=0; v<largo/2; v++){
        if(texto[v] != texto[largo-1-v]){
            palindroma=0;
        }
    }
    if(palindroma==1){
        printf("La palabra es palindroma");
    }else{
        printf("La palabra no es palindroma");
    }

    getch();
    return 0;
}
