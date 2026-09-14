#include <iostream>
using namespace std;

int main() {
    char C1, C2;
    
    // Lectura de los dos caracteres
    cin >> C1 >> C2;
    
    // Condición: si son iguales
    if (C1 == C2) {
        cout << "Iguales";
    } 
    // Si no son iguales
    else {
        cout << "Diferentes";
    }
    
    return 0;
}