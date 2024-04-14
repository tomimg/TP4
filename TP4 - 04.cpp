#include <iostream>

using namespace std;

int main(){
    int numero;

    cout << "Ingrese el número que desea multiplicar por los primeros diez números naturales:" << endl;
    cin >> numero;

    for (int i = 1; i < 11; i++){
        cout << "------------------------\nMultiplicado por " << i << " es: " << numero * i << endl;
    }

    return 0;
}