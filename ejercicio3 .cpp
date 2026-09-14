#include <iostream>
using namespace std;

int main() {
    int N;
    
    cout << "Ingrese un numero: ";
    cin >> N;
    
    if (N > 0) {
        cout << "#+";
    } else if (N < 0) {
        cout << "#-";
    } else {
        cout << "#0";
    }
    
    return 0;
}
