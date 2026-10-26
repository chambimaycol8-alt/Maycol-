#include <iostream>
using namespace std;
int main() {
    int n;
    int termino = 3;   // primer término
    cout << "Cuantos terminos hay: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << termino << " ";

        if (i % 2 == 1) {
            termino = termino - 1;   // posiciones impares: resta 1
        } else {
            termino = termino + 2;   // posiciones pares: suma 2
        }
    }

    cout << endl; 
    return 0;
} 
//3,2,4,3,5..
