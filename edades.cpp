#include <iostream>
using namespace std;
int main() 
{
    int N;
    cin >> N;
    if (N  >= 0 && N <= 3) {
        cout << "BEBE" << endl;
    } else if (N >= 4 && N <= 14) {
        cout << "NINO" << endl;
    } else if (N >= 15 && N <= 18) {
        cout << "JOVEN" << endl;
    } else if (N >= 19 && N <= 65) {
        cout << "ADULTO" << endl;
    } else {
        cout << "ADULTO 3RA" << endl;
    }

    return 0;
}