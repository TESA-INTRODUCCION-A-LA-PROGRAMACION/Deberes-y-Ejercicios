#include <iostream>
#include <vector>

using namespace std;

// Función para verificar si un número es primo
bool esPrimo(int numero)
{
    if (numero <= 1)
        return false;

    for (int i = 2; i < numero; i++)
    {
        if (numero % i == 0)
            return false;
    }
    return true;
}

// Función que recibe el arreglo y separa primos y no primos
void separarNumeros(int arreglo[], int tamano, vector<int>& primos, vector<int>& noPrimos)
{
    for (int i = 0; i < tamano; i++)
    {
        if (esPrimo(arreglo[i]))
            primos.push_back(arreglo[i]);
        else
            noPrimos.push_back(arreglo[i]);
    }
}

int main()
{
    int arreglo[10];
    vector<int> listaPrimos;
    vector<int> listaNoPrimos;

    cout << "Ingresa 10 números enteros:" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << "Número " << i + 1 << ": ";
        cin >> arreglo[i];
    }

    separarNumeros(arreglo, 10, listaPrimos, listaNoPrimos);

    cout << "\n--- Lista de números primos ---" << endl;
    for (int i = 0; i < listaPrimos.size(); i++)
    {
        cout << listaPrimos[i] << " ";
    }

    cout << "\n--- Lista de números NO primos ---" << endl;
    for (int i = 0; i < listaNoPrimos.size(); i++)
    {
        cout << listaNoPrimos[i] << " ";
    }

    return 0;
}
