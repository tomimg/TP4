#include <iostream>
#include <string> 

using namespace std;

int main(){
    string str;
    cout << "Ingrese la palabra que desea evaluar:" << endl;
    getline (cin, str);

    cout << "La longitud de la palabra ingresada es: " << str.size() << endl;

    return 0;
}