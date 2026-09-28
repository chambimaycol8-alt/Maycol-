#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
    int n; cout << "Numero de 2 digitos: "; cin >> n; n = abs(n);
    if (n >= 10 && n <= 99) cout << "Suma de los digitos es: " << n / 10 + n % 10;
    else cout << "No es de 2 digitos";
    return 0;
}
