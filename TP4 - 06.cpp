#include <iostream>

using namespace std;

bool esPrimo(int num){
    if (num == 0){
        return false;
    }
    if (num == 1){
        return true;
    }

    for (int i = 2; i < num; i++){
        if (num % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int a;
    
    cout << "Ingrese el número que desea evaluar:" << endl;
    cin >> a;

    for (int i = 0; i <= a; i++){
        if (esPrimo(i)){
            cout << i << " es primo!" << endl;
        } 
    }

    return 0;
}