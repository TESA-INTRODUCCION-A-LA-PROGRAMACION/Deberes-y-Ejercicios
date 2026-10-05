#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

// Con esta linera ya no es necesario escribir std::
using namespace std;

int main() {
	//1. Creamos un vector de 5 elementos tipo string
	vector<string> vectorOriginal(5);
	
	cout << "Por favor, ingrese 5 cadenas de texto: \n";
	
	//2. Inicializamos el vector con los datos leidos por consola
	for (int i=0; i<5; ++i) {
		cout << "Elemento [" << i+1 <<"]: ";
		getline(cin, vectorOriginal[i]); //Lee frases  con espacios
	}
	//3. Crea e imprime el vector de manera inversa
	vector<string> vectorInverso = vectorOriginal;
	reverse(vectorInverso.begin(), vectorInverso.end());
	
	cout << "\n---VECTOR INVERSO---\n";
	for (const string& cadena : vectorInverso) {
		cout << cadena << "\n";
		
	}
	//4. Crea e imprime el vector ordenado alfabeticamente
	vector<string> vectorOrdenado = vectorOriginal;
	sort(vectorOrdenado.begin(), vectorOrdenado.end());
	
	cout << "\n---VECTOR ORDENADO (Alfabeticamente)---\n";
	for (const string& cadena : vectorOrdenado) {
		cout <<cadena<< "\n";
		
	}
	return 0;
}
