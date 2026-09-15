#include <iostream>
using namespace std;

int main() {
    string tipo, subtipo, dieta;
    cin >> tipo >> subtipo >> dieta;

    if (tipo == "vertebrado") {
        if (subtipo == "ave") {
            if (dieta == "carnivoro") cout << "aguia" << endl;
            else cout << "pomba" << endl; 
        } else { 
            if (dieta == "onivoro") cout << "homem" << endl;
            else cout << "vaca" << endl; 
        }
    } else { 
        if (subtipo == "inseto") {
            if (dieta == "hematofago") cout << "pulga" << endl;
            else cout << "lagarta" << endl; 
        } else { 
            if (dieta == "hematofago") cout << "sanguessuga" << endl;
            else cout << "minhoca" << endl; 
        }
    }
    return 0;
}
