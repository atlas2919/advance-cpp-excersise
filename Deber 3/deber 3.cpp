/*
1) Generar dos vectores de igual tamaño (10-15) con números aleatorios entre 1 y 1000,

2) imprimir los vectores

3) Imprimir los elementos comunes de los 2 vectores

4)Usar solo notación de punteros en todo el programa */


#include <iostream>
#include <ctime>

using namespace std;

int main(){
    // generamos una nueva seed
    srand(time(0));

    // variables
    int size{15};
    int *v1 =  new int[size]; // uso de memoria dinamica por el size del vector
    int *v2 =  new int[size]; // uso de memoria dinamica por el size del vector

    // llenar los vectores con numeros aleatorios

    for(int i = 0; i < size; i++){
        *(v1 + i) = rand() % 1000 + 1;
        *(v2 + i) = rand() % 1000 + 1;
    }

    // imprimir los vectores

    cout << "Los numeros generados para el vector 1 son: " << endl;
    for(int i = 0; i < size; i++){
        cout << *(v1 + i) << " ";
    }

    cout << endl << endl;

    cout << "Los numeros generados para el vector 2 son: " << endl;
    for(int i = 0; i < size; i++){
        cout << *(v2 + i) << " ";
    }

    cout << endl << endl;

    //imprimir los valores comunes

    cout << "Los valores comunes son: " << endl;

    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            if(*(v1 +i) == *(v2 + j)){
                cout << *(v1 + i) << " ";
                break; // en caso de que en el v2 tenga 2 numeros iguales
            }
        }
    }

    cout << endl;

    // regresamos la memoria del heap
    delete[] v1;
    v1 = nullptr;

    delete[] v2;
    v2 = nullptr;


}
