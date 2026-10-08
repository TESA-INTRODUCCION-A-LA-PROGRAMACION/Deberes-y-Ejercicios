#include <cstdio>
#include <cstring>
#include <cctype>

//Funcion para verificar si una cadena es es palindroma
bool esPalindromo(char cadena[]){
	char limpia[200];
	int j = 0;
	
	//Limpiar cadena, quitar espacios y pasar a minusculas 
	for(int i =0; cadena[i] !='\0'; i++){
		if(isalnum(cadena[i])){ //Conserva solo letras y numeros
		   limpia[j] = tolower(cadena[i]);
            j++;
		}
	}
	
	limpia[j] = '\0'; // Marcador de fin de cadena

    int inicio = 0;
    int fin = strlen(limpia) - 1;

    // 2. Comparar caracteres desde los extremos hacia el centro
    while (inicio < fin) {
        if (limpia[inicio] != limpia[fin]) {
            return false; // No es palíndromo
        }
        inicio++;
        fin--;
    }

    return true; // Es palíndromo

}
int main() {
	char texto[200];
	printf("=== VERIFICADOR DE PALINDROMOS ===\n");
    printf("Ingresa una palabra o frase: ");
    
    // fgets permite leer cadenas con espacios incluidos
    fgets(texto, sizeof(texto), stdin);

    // Eliminar el salto de línea generado por fgets si existe
    int longitud = strlen(texto);
    if (longitud > 0 && texto[longitud - 1] == '\n') {
        texto[longitud - 1] = '\0';
    }

    // Verificar y mostrar el resultado
    if (esPalindromo(texto)) {
        printf("\n¡Es un palindromo!\n");
    } else {
        printf("\nNo es un palindromo.\n");
        
    }
	return 0;
}
