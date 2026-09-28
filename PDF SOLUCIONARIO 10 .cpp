#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
    int n; cout << "Digite un numero entero: "; cin >> n; n = abs(n);
    if (n >= 10 && n <= 99) cout << (n / 10 == n % 10 ? "los 2 digitos son iguales" : "los 2 digitos son diferentes");
    else cout << "No es de 2 digitos"; 
    return 0;
}
