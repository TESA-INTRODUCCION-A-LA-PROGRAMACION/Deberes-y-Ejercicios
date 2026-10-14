#include <iostream>
#include <string>

using namespace std;

int main() {
    string palabra;
    string invertida = "";
    
    cout << "Ingrese una palabra: ";
    cin >> palabra;
    
    for(int i = palabra.length() - 1; i >= 0; i--) {
        invertida += palabra[i];
    }
    
    if(palabra == invertida) {
        cout << "La palabra es palindroma." << endl;
    } else {
        cout << "La palabra no es palindroma." << endl;
    }
    
    return 0;
}
