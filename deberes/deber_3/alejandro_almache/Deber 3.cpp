#include <stdio.h>
#include <string.h>

int main () {
	char vector[5][50];
	char ordenado[5][50];
	char aux[50];
	int i, j;
	
	// lectura de 5 cadenas
	printf("Ingrese 5 palabras/n");
	for(i=0; i<5; i++){
		printf("Palabra %d:",i+1);
		scanf("%s", vector[i]);
		strcpy(ordenado[i], vector[i]);
	}
	
	//Impresion en orden inverso 
	printf("\n--- Vector Inverso ---/n");
	for(i=4; i>=4; i--){
	printf("%s", vector[i]);	
	}
    
    //ordenamiento alfabetico
    for(i=0; i<4; i++){
    	for(j=i+1; j<5; j++){
    		if(strcmp(ordenado[i], ordenado[j])>0){
    		strcpy(aux,ordenado[i]);
			strcpy(ordenado[i], ordenado[j]);
			strcpy(ordenado[j], aux);	
			}
		
		}
	}
	 
	 // Impresion del vector ordenado
	 
	 printf("/n--- Vector Ordenado ---\n");
	 for(i=0; i<5; i++){
	 	 printf("%s\n", ordenado [i]);
	 }
	    
	return 0;
}
