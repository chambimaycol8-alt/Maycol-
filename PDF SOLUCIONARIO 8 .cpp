#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
    int n; cout << "Digite un numero entero: "; cin >> n; n = abs(n);
    int a = n / 10, b = n % 10;
    if (n >= 10 && n <= 99)
        cout << ((a == 2 || a == 3 || a == 5 || a == 7) && (b == 2 || b == 3 || b == 5 || b == 7)
                 ? "Los dos digitos son primos" : "Uno de los dos digitos o ninguno de los dos digitos son primos");
    return 0;
}
