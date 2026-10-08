#include <cstdio>
#include <cstdlib>
#include <ctime>

int main() {
	// Inicializar la semilla para números aleatorios
    srand(time(0));
    
    //Generar un numero aleatortio entre 1 y 100
    int numeroOculto = (rand()% 100) +1;
    
    int intentoUsuario;
    int intentosRestantes= 5;
    bool adivino= false;
    
    printf("=== JUEGO DE ADIVINAR EL NUMERO ===\n");
    printf("Numero entre 1 y 100.\n");
    printf("Tienes %d de intentos para adivinarlo.\n\n", intentosRestantes);
    
   while (intentosRestantes > 0 && !adivino){
    	printf("Ingresa tu numero (%d intentos restantes): ", intentosRestantes);
        scanf("%d", &intentoUsuario);
        
       if (intentoUsuario == numeroOculto){
        	printf("Pista: El numero a adivinar es MAYOR que %d.\n", intentoUsuario);
            intentosRestantes--;
        	
		}else{
			printf("Pista: El numero a adivinar es MENOR que %d.\n", intentoUsuario);
            intentosRestantes--;
		}
		printf("-----------------------------------\n");
	}
    //Resultado final
    if (adivino){
    	printf("\n¡Felicidades! Adivinaste el numero %d correctamente.\n", numeroOculto);
	}else{
		printf("\n¡Agotaste tus 5 intentos! El numero era: %d\n", numeroOculto);
	}

	return 0;
}
