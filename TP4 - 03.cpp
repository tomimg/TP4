#include <iostream>

using namespace std;

int main(){
    int numero;
    
    cout << "Ingrese el número que desea evaluar:" << endl;
    cin >> numero;

    if (numero % 2 == 0){
        cout << "Tu número es par!" << endl;
    } else {
        cout << "Tu número es impar!" << endl;
    }

    return 0;
}