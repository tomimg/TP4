#include <iostream>

using namespace std;

int mcd(int a, int b) {
    int resto;

    while (b != 0) {
        resto = a % b;
        a = b;
        b = resto;

    }

    return a;

}

int main(){
    int a, b;

    cout << "Ingrese el primer número que desea evaluar:" << endl;
    cin >> a;
    cout << "Ingrese el segundo número que desea evaluar:" << endl;
    cin >> b;

    cout << "El máximo comun divisor entre los dos números ingresados es: " << mcd(a, b) << endl;

    return 0;
}