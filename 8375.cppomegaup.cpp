#include <iostream>
using namespace std;
int main() {
    long long a, b;
    cin >> a >> b;
    if (a > b)
        cout << "El negocio si va a jalar" << endl << (a - b) << endl;
    else
        cout << "Dejalo ya esta muerto" << endl << (b - a) << endl;
    return 0;
}