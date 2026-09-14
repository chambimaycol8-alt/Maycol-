#include<iostream>
using namespace std;
int main()
{
int edad;
bool VIP;
cin >> edad >> VIP; 
bool ingreso = (edad >= 18) || VIP; 
cout << ingreso;
return 0;
}
