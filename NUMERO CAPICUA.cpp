#include <iostream>
using namespace std;
int main() {
    int num, a, b, c, d;
    cout << "Ingrese un numero de 4 digitos: ";
    cin >> num;

    if (num >= 1000 && num <= 9999) {
        a = num / 1000;
        b = (num / 100) % 10;
        c = (num / 10) % 10;
        d = num % 10;

        if (a == d && b == c) {
            cout << num << " es capicua" << endl;
        } else {
            cout << num << " no es capicua" << endl;
        }
    } else {
        cout << "El numero no tiene 4 digitos" << endl;
    }

    return 0;
}
