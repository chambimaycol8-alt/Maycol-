#include <iostream>
using namespace std;

int main() 
{
int x, y, z;
cin >> x >> y >> z;
if (x == y && y == z) {
cout << "equilatero" << endl;
}
else if (x == y || y == z || x == z) 
{
cout << "isosceles" << endl;
}
else
{
cout << "escaleno" << endl;
}
return 0;
}