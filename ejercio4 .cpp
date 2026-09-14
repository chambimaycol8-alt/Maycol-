#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; // Lee el número ingresado por el usuario
    
    if (n % 2 == 0) {
        cout << "Par";   // Si el residuo es 0, es par
    } else {
        cout << "Impar"; // De lo contrario, es impar
    }
    
    return 0;// son ejemplos 
}
