#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
//Angel Mejia
const int cuantas_palabras = 10;

//Aca va la lista de las palabras
void lista_de_palabras(const char* palab[]) {
    palab[0] = "tesa";
    palab[1] = "introduccion";
    palab[2] = "programacion";
    palab[3] = "distancia";
    palab[4] = "profesor";
    palab[5] = "palabras";
    palab[6] = "motivacionales";
    palab[7] = "antes";
    palab[8] = "cada";
    palab[9] = "clase";
}

int main() {
    const char* palab[cuantas_palabras];
    lista_de_palabras(palab);

    //Aca elegimos una palabra de la lista al azar
    srand((unsigned int)time(NULL));
    const char* secreto = palab[rand() % cuantas_palabras];
	//Elige la palabra de la lista e ingresamos los datos
    printf("Adivina la palabra secreta\n");
    printf("Pista: tiene %d letras y empieza con '%c'.\n",
           (int)strlen(secreto), secreto[0]);

    char adivi[50];
    int intentos = 0;

    while (true) {
        printf("Tu respuesta: ");
        scanf("%49s", adivi);
        intentos++;

        if (strcmp(adivi, secreto) == 0) {
            printf("Correcto. lo lograste en %d intento(s).\n", intentos);
            break;
        }
        printf("Casi, intenta de nuevo.\n");
    }

    return 0;
}
