#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
    int num;
    cout << "Digite un numero entero: ";
    cin >> num;

    if (abs(num) % 10 == 4) {
        cout << "El numero termina en 4" << endl;
    } else {
        cout << "El numero no termina en 4" << endl;
    }
    return 0;
}
