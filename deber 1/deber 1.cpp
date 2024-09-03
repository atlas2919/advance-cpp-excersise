//// crear un programa que lee 3 variables y determina la mayor. Solo notación de punteros. ////

#include <iostream>
using namespace std;

int main(){
    // variables
    int a, b, c;

    //ingreso de valores
    cout << "Ingrese el valor de a: ";
    cin >> a;
    cout << "Ingrese el valor de b: ";
    cin >> b;
    cout << "Ingrese el valor de c: ";
    cin >> c;
    cout << endl;

    // declarar puntero e inicializar
    int *max_ptr = &a;

    //hacer la comparativa y cambiar hacia donde apunta el puntero de ser necesario
    if(*max_ptr < b){
        max_ptr = &b;
    }
    if(*max_ptr < c){
        max_ptr = &c;
    }

    // printeamos resultado

    cout << "El valor mayor es: " << *max_ptr << endl;
}
