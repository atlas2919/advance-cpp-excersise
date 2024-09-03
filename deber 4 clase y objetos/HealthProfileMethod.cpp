#include <iostream>
#include <cmath>
#include <ctime> //lo usamos para para las fechas y hora actuales
// incluimos el .h definido
#include "HealthProfile.h"

HealthProfile::HealthProfile(){}

HealthProfile::HealthProfile(const string &firstName, const string &lastName, char gender, //Gender M for male and F for Female
                             int birthDay, int birthMonth, int birthYear,
                             double heightInches, double weightPounds)
                             : firstName(firstName), lastName(lastName), gender(gender),
                               birthDay(birthDay), birthMonth(birthMonth), birthYear(birthYear),
                               heightInches(heightInches), weightPounds(weightPounds) {}

// set
void HealthProfile::setFirstName(const string &firstName){
    this -> firstName = firstName; //this -> es puntero implicito que apunta al objeto actual en el que se esta ejecutando un metodo miembro de una clase
}

void HealthProfile::setLastName(const string &lastName){
    this -> lastName = lastName;
}

void HealthProfile::setGender(char gender){
    this -> gender = gender;
}

void HealthProfile::setBirthDay(int birthDay){
    this -> birthDay = birthDay;
}

void HealthProfile::setBirthMonth(int birthMonth){
    this -> birthMonth = birthMonth;
}

void HealthProfile::setBirthYear(int birthYear){
    this -> birthYear = birthYear;
}

void HealthProfile::setHeight(double heightInches){
    this -> heightInches =  heightInches;
}

void HealthProfile::setWeight(double weightPounds){
    this -> weightPounds = weightPounds;
}


// get
string HealthProfile::getFirstName()const{
    return firstName;
}

string HealthProfile::getLastName() const{
    return lastName;
}

char HealthProfile::getGender() const{
    return gender;
}

int HealthProfile::getBirthDay() const{
    return birthDay;
}

int HealthProfile::getBirthMonth() const{
    return birthMonth;
}

int HealthProfile::getBirthYear() const{
    return birthYear;
}

double HealthProfile::getHeight() const{
    return heightInches;
}

double HealthProfile::getWeight() const{
    return weightPounds;
}


// Calculos
int HealthProfile::calculateAge() const{
    time_t currentTime = time(nullptr); //obtiene la fecha actual del sistema
    tm* localTime = localtime(&currentTime); // tm convierte el local time para extrar Day, Month and Year
    int currentYear = localTime -> tm_year + 1900; // -> operador que accede a la clase, estructura o miembros de union usando puntero, sumamos 1900 ya que tm_year devuelve los años desde 1900 por eso le sumamos para obtener el año actual

    // calcular edad
    int age = currentYear - birthYear;
    if(localTime->tm_mon + 1 < birthMonth || (localTime->tm_mon + 1 == birthMonth && localTime->tm_mday < birthDay)){
        age--;
    }
    return age;
}

double HealthProfile::calculateBMI() const{
    return ((weightPounds * 703) / (heightInches * heightInches));
}

int HealthProfile::calculateMaxHeartRate() const{
    return (220 - calculateAge());
}

pair<int, int> HealthProfile::calculateTargetHeartRateRange() const{
    //calculamos rango de frecuencia maxima cardiaca ibjetivo
    int maxHeartRate = calculateMaxHeartRate();
    int lowerBound = static_cast<int>(maxHeartRate * 0.5); //static_cast<TipoDato> es para conversion de dato
    int upperBound = static_cast<int>(maxHeartRate * 0.85);

    return make_pair(lowerBound, upperBound);
}
