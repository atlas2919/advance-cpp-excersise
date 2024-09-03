#include <fstream>
#include <cstdlib>
#include <ctime>
#include "MotorVehicle.h"

int main(){

    // seed
    srand(time(nullptr));

    //creacion de los objetos
    MotorVehicle vehicle1("Toyota", "Diesel", rand()%10+2010, "Rojo", rand()%2000+1000);
    MotorVehicle vehicle2("Honda", "Gasolina", rand()%10+2010, "Negro", rand()%2000+1000);

    //mostrar detalles del carro
    cout << "Detalles del vehiculo 1: ";
    vehicle1.displayCarDetails();
    cout << "Detalles del vehiculo 2: ";
    vehicle2.displayCarDetails();

    cout << endl;

    //comparacion
    if(vehicle1 == vehicle2){
        cout << "Los vehiculos son iguales." << endl;
    } else{
        cout << "Los vehiculos no son iguales." << endl;
    }

    cout << endl;

    //comprobacion de desigualdad
    if(vehicle1 != vehicle2){
        cout << "Los vehiculos no son identicos." << endl;
    } else{
        cout << "Los vehiculos son iguales." << endl;
    }

    cout << endl;

    // comprobacion de cual es mayor
    if(vehicle1 > vehicle2){
        cout << "El vehiculo 2 es mas viejo que el vehiculo 1." << endl;
    } else{
        cout << "El vehiculo 1 es mas viejo que el vehiculo 2." << endl;
    }

    return 0;
}
