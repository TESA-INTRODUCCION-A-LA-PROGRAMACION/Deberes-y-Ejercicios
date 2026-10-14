#include <iostream>
#include <string>
#include <cctype>
#include <cstdlib>
using namespace std;

bool esPalindromo(string texto) {
    string limpio = "";
    for (int i = 0; i < (int)texto.length(); i++)
        if (isalnum((unsigned char)texto[i])) limpio += tolower(texto[i]);
    int n = limpio.length();
    for (int i = 0; i < n / 2; i++)
        if (limpio[i] != limpio[n - 1 - i]) return false;
    return true;
}

int main() {
    string texto;
    cout << "Ingresa una palabra o frase: ";
    getline(cin, texto);
    if (esPalindromo(texto))
        cout << "\"" << texto << "\" es palindroma." << endl;
    else
        cout << "\"" << texto << "\" no es palindroma." << endl;
    system("pause");
    return 0;
}
