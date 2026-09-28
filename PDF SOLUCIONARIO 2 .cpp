#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
    int num;
    cout << "Digite un numero entero: ";
    cin >> num;

    num = abs(num);                 

    if (num >= 100 && num <= 999) {
        cout << "El numero leido tiene 3 digitos" << endl;
    } else {
        cout << "El numero leido no tiene 3 digitos" << endl;
    }
    return 0;
}
