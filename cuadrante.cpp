#include <iostream>
using namespace std;
int main()
{
int x, y;
    cout << "Ingrese la coordenada X: ";
    cin >> x;
    cout << "Ingrese la coordenada Y: ";
    cin >> y;
    if (x == 0 && y == 0) {
        cout << "El punto está sobre el eje X." << endl;
    } if (x > 0 && y > 0) {
        cout << "El punto pertenece al primer cuadrante." << endl;
    } if (x < 0 && y > 0) {
        cout << "El punto pertenece al segundo cuadrante." << endl;
    } if (x < 0 && y < 0) {
        cout << "El punto pertenece al tercer cuadrante." << endl;
    } else if (x > 0 && y < 0) {
        cout << "El punto pertenece al cuarto cuadrante.";
    }
    return 0;
}