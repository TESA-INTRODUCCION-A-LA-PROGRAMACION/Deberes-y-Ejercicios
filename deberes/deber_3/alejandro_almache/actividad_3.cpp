#include <stdio.h>


int main() {
	int numeros[5];
	int pares [5], impares[5];
	int p=0, imp=0;
	int i;
	
	//lectura de 5 numeros 
	printf("Ingrese 5 numeros enteros:\n");
	for(i=0; i<5; i++){
		printf("Numero %d:", i+1);
		scanf("%d", &numeros[i]);
	}
	
	// Separar pares e impares
	for(i=0; i<5; i++){
		if(numeros[i] % 2==0){
			pares[p]= numeros[i];
			p++;
			}else{
				impares [imp] = numeros [i];
				imp++;
				
			}
		}
		
		//Impresion lista de pares
		printf("\n--- Numeros Pares ---/n");
		for(i=0; i<p; i++){
			printf("%d\n", pares[i]);
		}
		
		// Ipresion lista de impares
			printf("\n--- Numeros Impares ---/n");
		for(i=0; i<imp; i++){
			printf("%d\n", impares[i]);
		}
		return 0;	
	}


