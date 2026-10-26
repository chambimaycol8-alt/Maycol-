#include <iostream>
using namespace std;
int main() {
    int n;
    int a = 0, b = 1, c;
    cout << "Ingrese la cantidad de terminos: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << a << " ";

        c = 2 * b + a;
        a = b;
        b = c;
    }
    return 0;
}
