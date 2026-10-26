#include <iostream>
using namespace std;

int main() {
    int n;
    long long S = 0;

    cout << "Ingrese n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int exp = n - i + 1;
        long long p = 1;
        for (int j = 1; j <= exp; j++) {
            p = p * i;
        }
        S = S + p;
    }

    cout << "S = " << S << endl;
    return 0;
}
//1^5+2^4+3^3+4^2+5^1
