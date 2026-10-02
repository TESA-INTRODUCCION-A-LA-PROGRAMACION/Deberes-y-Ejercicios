#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
// Angel Mejia
int main() {
    const int N = 5;
    std::vector<std::string> original;
    char buffer[256];

    // Se leen las 5 cadenas que ingresamos en la consola
    for (int i = 0; i < N; i++) {
        printf("Ingrese el dato %d de %d: ", i + 1, N);
        if (scanf("%255s", buffer) != 1) {
            printf("Error al leer eldato.\n");
            return 1;
        }
        original.push_back(buffer);
    }

    // Primer vector: elementos en orden inverso
    std::vector<std::string> invertido(original.rbegin(), original.rend());

    // Segundo vector: elementos ordenados de forma ascendente
    std::vector<std::string> ordenado = original;
    std::sort(ordenado.begin(), ordenado.end());
    // Primer vector imprime el inverso
    printf("\nVector invertido:\n");
    for (const std::string& s : invertido) {
        printf("%s\n", s.c_str());
    }
    // Segundo vector imprime orden ascendente
    printf("\nVector ordenado:\n");
    for (const std::string& s : ordenado) {
        printf("%s\n", s.c_str());
    }

    return 0;
}
