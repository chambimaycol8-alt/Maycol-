#include <iostream>
using namespace std;
int main() {
    int n; cout << "Digite un numero entero: "; cin >> n;
    cout << (n <= -10 && n >= -99 && n % 2 != 0 && n % 3 != 0 && n % 5 != 0 && n % 7 != 0
             ? "Es primo y negativo" : "No es primo o no es negativo");
return 0;
}
