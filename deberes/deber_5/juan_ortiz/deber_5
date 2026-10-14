#include <stdio.h>

int es_primo(int num) {
    int i;
    if(num<=1) return 0;
    for(i=2;i<num;i++) {
        if(num%i==0) return 0;
    }
    return 1;
}

int main() {
    int vector[10];
    int primos[10];
    int no_primos[10];
    int c_primos=0;
    int c_no_primos=0;
    int i;

    for(i=0;i<10;i++) {
        printf("Ingrese el elemento %d => ",i+1);
        scanf("%d",&vector[i]);
    }

    for(i=0;i<10;i++) {
        if(es_primo(vector[i])) {
            primos[c_primos]=vector[i];
            c_primos++;
        } else {
            no_primos[c_no_primos]=vector[i];
            c_no_primos++;
        }
    }

    printf("\nNumeros Primos:\n");
    for(i=0;i<c_primos;i++) {
        printf("\t%d",primos[i]);
    }

    printf("\n\nNumeros No Primos:\n");
    for(i=0;i<c_no_primos;i++) {
        printf("\t%d",no_primos[i]);
    }

    printf("\n");
    return 0;
}
