#include <iostream>
#include <string>
#include <cctype>   // Para std::tolower y std::isalnum
#include <cstdlib>  // Para system("cls") o system("clear")

// Función para reemplazar vocales con tildes por su versión normal sin tilde
std::string quitarTildes(const std::string& texto) {
    std::string resultado = "";
    for (size_t i = 0; i < texto.length(); ++i) {
        unsigned char c = texto[i];
        
        // Detectar caracteres codificados con tildes comunes en consola/Windows
        if (c == 160 || c == 181 || c == 225 || c == 193) resultado += 'a';      // á / Á
        else if (c == 130 || c == 144 || c == 233 || c == 201) resultado += 'e'; // é / É
        else if (c == 161 || c == 214 || c == 237 || c == 205) resultado += 'i'; // í / Í
        else if (c == 162 || c == 224 || c == 243 || c == 211) resultado += 'o'; // ó / Ó
        else if (c == 163 || c == 233 || c == 250 || c == 218) resultado += 'u'; // ú / Ú
        else resultado += c;
    }
    return resultado;
}

int main() {
    char opcion;

    do {
        #ifdef _WIN32
            std::system("cls");
        #else
            std::system("clear");
        #endif

        std::string textoEntrada;
        std::string textoLimpio = "";

        std::cout << "========================================\n";
        std::cout << "     VERIFICADOR DE PALINDROMOS        \n";
        std::cout << "========================================\n\n";

        std::cout << "Ingresa una palabra o frase: ";
        std::getline(std::cin, textoEntrada);

        // 1. Quitar tildes
        std::string textoSinTildes = quitarTildes(textoEntrada);

        // 2. Conservar únicamente letras (a-z) y números, pasándolo a minúsculas
        for (size_t i = 0; i < textoSinTildes.length(); ++i) {
            unsigned char c = textoSinTildes[i];
            if (std::isalnum(c)) {
                textoLimpio += std::tolower(c);
            }
        }

        // 3. Comprobar si es palíndromo
        bool esPalindromo = true;
        int inicio = 0;
        int fin = textoLimpio.length() - 1;

        while (inicio < fin) {
            if (textoLimpio[inicio] != textoLimpio[fin]) {
                esPalindromo = false;
                break;
            }
            inicio++;
            fin--;
        }

        // 4. Mostrar resultados
        std::cout << "\n----------------------------------------\n";
        if (esPalindromo && !textoLimpio.empty()) {
            std::cout << "-> ¡SI es un palindromo!\n";
        } else {
            std::cout << "-> NO es un palindromo.\n";
        }

        // 5. Preguntar si desea intentar de nuevo
        std::cout << "========================================\n";
        std::cout << "¿Deseas evaluar otra frase? (s/n): ";
        std::cin >> opcion;

        std::cin.ignore(10000, '\n');

    } while (opcion == 's' || opcion == 'S');

    std::cout << "\n¡Gracias por usar el programa!\n";

    return 0;
}
