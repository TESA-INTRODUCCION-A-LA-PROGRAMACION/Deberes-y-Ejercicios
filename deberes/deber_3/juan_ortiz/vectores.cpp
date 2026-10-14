#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

void encerar(char vec[5][50]);
void ingresar(char vec[5][50]);
void copiar(char destino[5][50], char origen[5][50]);
void ordenar(char vec[5][50]);
void imprimir(char vec[5][50]);
void imprimir_inverso(char vec[5][50]);

void encerar(char vec[5][50]) {
    int i;
    for (i = 0; i < 5; i++) {
        vec[i][0] = '\0';
    }
}

void ingresar(char vec[5][50]) {
    int i;
    for (i = 0; i < 5; i++) {
        printf("Ingrese el elemento %d => ", i + 1);
        scanf("%s", vec[i]);
    }
}

void copiar(char destino[5][50], char origen[5][50]) {
    int i;
    for (i = 0; i < 5; i++) {
        strcpy(destino[i], origen[i]);
    }
}

void ordenar(char vec[5][50]) {
    int i, j;
    char aux[50];
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 4; j++) {
            if (strcmp(vec[j], vec[j + 1]) > 0) {
                strcpy(aux, vec[j]);
                strcpy(vec[j], vec[j + 1]);
                strcpy(vec[j + 1], aux);
            }
        }
    }
}

void imprimir(char vec[5][50]) {
    int i;
    for (i = 0; i < 5; i++) {
        printf("\t%s", vec[i]);
    }
    printf("\n");
}

void imprimir_inverso(char vec[5][50]) {
    int i;
    for (i = 4; i >= 0; i--) {
        printf("\t%s", vec[i]);
    }
    printf("\n");
}

int main(int argc, char** argv) {
    char vector1[5][50];
    char vector2[5][50];

    encerar(vector1);
    encerar(vector2);

    ingresar(vector1);

    copiar(vector2, vector1);
    ordenar(vector2);

    printf("\nVector Inverso:\n");
    imprimir_inverso(vector1);

    printf("\nVector Ordenado:\n");
    imprimir(vector2);

    return 0;
}
