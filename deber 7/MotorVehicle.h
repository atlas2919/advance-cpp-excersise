#ifndef MOTORVEHICLE_H_INCLUDED
#define MOTORVEHICLE_H_INCLUDED

#include <iostream>
#include <string>
using namespace std;

class MotorVehicle{
private:
    string brand;
    string fuelType;
    int year;
    string color;
    int displacement;
public:
    //constructores
    MotorVehicle();
    MotorVehicle(string brand, string fuelType, int year, string color, int displacement);

    //operadores
    bool operator == (const MotorVehicle& other) const;
    bool operator != (const MotorVehicle& other) const;
    bool operator > (const MotorVehicle& other) const;

    friend ostream& operator << (ostream& os, const MotorVehicle& vehicle);

    void displayCarDetails() const;

};


#endif // MOTORVEHICLE_H_INCLUDED
