#include <iostream>
using namespace std;
int main() {
    string nombre;
    float nota;
    for (int i = 1; i <= 3; i++) {
        cout << "Ingrese el nombre del estudiante " << i << ": ";
        cin >> nombre;

        cout << "Ingrese su nota: ";
        cin >> nota;
      
        if (nota >= 11) {
            cout << nombre << " esta APROBADO" << endl;
        } else {
            cout << nombre << " esta DESAPROBADO" << endl;
        }

        cout << endl;
    }

    return 0;
}
