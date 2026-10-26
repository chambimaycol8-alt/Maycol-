#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Ingrese la cantidad de terminos: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << i << ", ";
        }
    }

    return 0;
}
