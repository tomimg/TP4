#include <iostream>
#include <string>

using namespace std;

string reverse (string str){
    int b = str.size() - 1;
    char aux = '\0';
    for (int i = 0; i < b; i++){
        aux = str[i];
        str[i] = str[b];
        str[b] = aux;
        b--;
    }
    return str;
}

int main(){
    string palabra;
    cout << "Ingrese la palabra que desea dar vuelta:\n";
    getline(cin, palabra);

    palabra = reverse(palabra);

    cout << "La palabra ingresada dada vuelta es: " << palabra << "\n";

    return 0;
}