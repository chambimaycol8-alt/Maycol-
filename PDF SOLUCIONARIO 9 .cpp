#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
    int n; cout << "Digite un numero entero: "; cin >> n; n = abs(n);
    int a = n / 10, b = n % 10;
    if (n >= 10 && n <= 99) cout << (b == 0 || a % b == 0 || b % a == 0 ? "Un digito es multiplo del otro" : "Ninguno es multiplo del otro");
    else cout << "No es de 2 digitos";
    return 0;
}
