#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {              // filas

        // Letra M
        for (int j = 1; j <= 5; j++) {          // columnas
            if (j == 1 || j == 5 ||
                (i == 2 && (j == 2 || j == 4)) ||
                (i == 3 && j == 3))
                cout << "*";
            else
                cout << " ";
        }
        cout << "   ";

        // Letra D
        for (int j = 1; j <= 5; j++) {
            if (j == 1 ||
                ((i == 1 || i == 5) && j <= 4) ||
                ((i >= 2 && i <= 4) && j == 5))
                cout << "*";
            else
                cout << " ";
        }
        cout << "   ";

        // Letra C
        for (int j = 1; j <= 5; j++) {
            if (((i == 1 || i == 5) && j >= 2) ||
                ((i >= 2 && i <= 4) && j == 1))
                cout << "*";
            else
                cout << " ";
        }
        cout << "   ";

        // Letra L
        for (int j = 1; j <= 5; j++) {
            if (j == 1 || i == 5)
                cout << "*";
            else
                cout << " ";
        }

        cout << endl;                           // salto de línea
    }
    return 0;
}
