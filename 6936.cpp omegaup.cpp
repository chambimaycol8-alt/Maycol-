#include <iostream>
using namespace std;

int main() {
    int n, m, a;
    cin >> n >> m >> a;
    if (n != m && m != a && n != a)
        cout << "ELLA NO TE AMA" << endl;
    else
        cout << "ELLA TE AMA" << endl;
    return 0;
}