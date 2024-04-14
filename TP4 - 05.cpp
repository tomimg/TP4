#include <iostream>

using namespace std;

float promedioTres(float n1, float n2, float n3){
    float resultado = 0;
    resultado = n1 + n2 + n3;
    resultado /= 3;
    return resultado;
}

int main(){
    float a, b, c;
    
    cout << "Ingrese el primer número:" << endl;
    cin >> a;

    cout << "Ingrese el segundo número:" << endl;
    cin >> b;

    cout << "Ingrese el tercer número:" << endl;
    cin >> c;

    cout << "El promedio entre los tres números ingresados es: " << promedioTres(a, b, c) << endl;

    return 0;
}