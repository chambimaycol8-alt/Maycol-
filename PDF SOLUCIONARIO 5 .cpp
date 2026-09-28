#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
    int n; cout << "Digite un numero entero: "; cin >> n; n = abs(n);
    if (n >= 10 && n <= 99) cout << (n / 10 % 2 == 0 && n % 2 == 0 ? "Los dos digitos son pares" : "Los dos digitos no son pares");
    else cout << "No es de 2 digitos";
}
