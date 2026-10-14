#include <stdio.h>
#include <string.h>

int main() {
    char palabra[50];
    int i,tam,es_palindromo=1;

    printf("Ingrese una palabra => ");
    scanf("%s",palabra);

    tam=strlen(palabra);

    for(i=0;i<tam/2;i++) {
        if(palabra[i]!=palabra[tam-1-i]) {
            es_palindromo=0;
            break;
        }
    }

    if(es_palindromo) {
        printf("\nLa palabra '%s' ES palindroma.\n",palabra);
    } else {
        printf("\nLa palabra '%s' NO es palindroma.\n",palabra);
    }

    return 0;
}
