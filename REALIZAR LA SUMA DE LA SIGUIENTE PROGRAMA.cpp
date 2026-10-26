#include <iostream>
using namespace std;
int main() {
    float suma = 0;
    for (int i = 1; i <= 3; i++) {
        suma = suma + (float)i / (i + 1);
    }

    cout << "La suma es: " << suma << endl;

    return 0;
}
