#include "MotorVehicle.h"

MotorVehicle::MotorVehicle(){}
MotorVehicle::MotorVehicle(string brand, string fuelType, int year, string color, int displacement) :
    brand(brand), fuelType(fuelType), year(year), color(color), displacement(displacement) {}

bool MotorVehicle::operator==(const MotorVehicle& other) const {
    return brand == other.brand &&
           fuelType == other.fuelType &&
           year == other.year &&
           color == other.color &&
           displacement == other.displacement;
}

bool MotorVehicle::operator!=(const MotorVehicle& other)const{
    return !(*this == other);
}

bool MotorVehicle::operator>(const MotorVehicle& other)const{
    return year > other.year;
}

ostream& operator << (ostream& os, const MotorVehicle& vehicle){
    os << "Brand: " << vehicle.brand << ", ";
    os << "Fuel Type: " << vehicle.fuelType << ", ";
    os << "Year: " << vehicle.year << ", ";
    os << "Color: " << vehicle.color << ", ";
    os << "Displacement: " << vehicle.displacement;

    return os;
}

void MotorVehicle::displayCarDetails() const {
    ostream& os = cout;
    os << *this << endl;
}
