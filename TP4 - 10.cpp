#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    float a, b;
    int opcion;

    while (true){
        cout << "---------------------------------\nIngrese la opcion que desea ejecutar (1-5):\n1- Sumar\n2- Restar\n3- Multiplicar\n4- Dividir\n5- Salir\n---------------------------------\n";
        cin >> opcion;

        if (opcion == 1){
            cout << "---------------------------------\nIngrese el primer numero que desea sumar:\n"; 
            cin >> a;
            cout << "Ingrese el segundo numero que desea sumar:\n"; 
            cin >> b;
            cout << "---------------------------------\nLa suma entre " << a << " y " << b << " es " << a + b << ".\n";           
        } else if (opcion == 2){
            cout << "---------------------------------\nIngrese el primer numero que desea restar:\n"; 
            cin >> a;
            cout << "Ingrese el segundo numero que desea restar:\n"; 
            cin >> b;
            cout << "---------------------------------\nLa resta entre " << a << " y " << b << " es " << a - b << ".\n";        
        } else if (opcion == 3){
            cout << "---------------------------------\nIngrese el primer numero que desea multiplicar:\n"; 
            cin >> a;
            cout << "Ingrese el segundo numero que desea multiplicar:\n"; 
            cin >> b;
            cout << "---------------------------------\nLa multiplicacion entre " << a << " y " << b << " es " << a * b << ".\n";    
        } else if (opcion == 4){
            cout << "---------------------------------\nIngrese el primer numero que desea dividir:\n"; 
            cin >> a;
            cout << "Ingrese el segundo numero que desea dividir:\n"; 
            cin >> b;
            cout << "---------------------------------\nLa division entre " << a << " y " << b << " es " << a / b << ".\n";    
        } else {
            break;
        }
        cout << "Presione una tecla para continuar...\n";
        getch();
        cout << "\x1B[2J\x1B[0;0f";
    }

    return 0;
}