#include <iostream>
using namespace std;

bool esPrimo(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return false;
    return true;
}

void clasificar(int nums[], int primos[], int &cp, int noPrimos[], int &cn) {
    cp = 0; cn = 0;
    for (int i = 0; i < 10; i++) {
        if (esPrimo(nums[i])) primos[cp++] = nums[i];
        else noPrimos[cn++] = nums[i];
    }
}

int main() {
    int nums[10], primos[10], noPrimos[10], cp, cn;
    for (int i = 0; i < 10; i++) {
        cout << "Ingrese el numero " << i + 1 << ": ";
        cin >> nums[i];
    }
    clasificar(nums, primos, cp, noPrimos, cn);
    cout << "Primos: ";
    for (int i = 0; i < cp; i++) cout << primos[i] << " ";
    cout << endl << "No primos: ";
    for (int i = 0; i < cn; i++) cout << noPrimos[i] << " ";
    cout << endl;
    return 0;
}
