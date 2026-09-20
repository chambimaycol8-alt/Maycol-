#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    int jugador, computadora;
    srand(time(0));
    cout << "=== PIEDRA, PAPEL O TIJERA ===" << endl;
    cout << "1. Piedra" << endl;
    cout << "2. Papel" << endl;
    cout << "3. Tijera" << endl;
    cout << "Elige una opcion: ";
    cin >> jugador;
    computadora = rand() % 3 + 1;
    cout << "La computadora eligio: " << computadora << endl;
    if (jugador == computadora) {
        cout << "Empate!" << endl;
    }
    else if ((jugador == 1 && computadora == 3) ||
             (jugador == 2 && computadora == 1) ||
             (jugador == 3 && computadora == 2)) {
        cout << "Ganaste!" << endl;
    }
    else {
        cout << "Gano la computadora!" << endl;
    }

    return 0;
} 