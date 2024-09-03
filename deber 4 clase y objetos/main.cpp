#include <iostream>
#include <cstdlib>
#include <ctime> // Necesario para la generacion de numeros aleatorios
#include "HealthProfile.h"

int main()
{
    //inicializamos la semilla
    srand(time(nullptr));

    //generamos valores aleatorios
    int birthDay = rand()% 28 + 1;
    int birthMonth = rand() % 12 + 1;
    int birthYear =  rand() % 50 + 1970;

    double heightInches = (rand() % 25 + 60) + ((rand() % 100) / 100.0);
    double weightPounds = (rand() % 251 + 50) + ((rand() % 100) / 100.0);

    // creamos el objeto con un nopmbre dado por nosotros
    HealthProfile person1("Emilio", "Valencia", 'M', birthDay, birthMonth, birthYear, heightInches, weightPounds);

    // mostrar informacion
    cout << "Nombre completo: " << person1.getFirstName() << " " << person1.getLastName() << endl;
    cout << "Sexo: " << person1.getGender() << endl;
    cout << "Fecha de nacimiento d/m/y: " << person1.getBirthDay() << "/" << person1.getBirthMonth() << "/" << person1.getBirthYear() << endl;
    cout << "Altura: " << person1.getHeight() << " pulgadas" << endl;
    cout << "Peso: " << person1.getWeight() << " libras" << endl;
    cout << endl;

    //mostrar calculos
    cout << "Informacion addicional: " << endl;
    cout << "Edad: " << person1.calculateAge() << endl;
    cout << "IMC (Indice de Masa Corporal): " << person1.calculateBMI() << endl;
    cout << "Frecuencia cardiaca maxima: " << person1.calculateMaxHeartRate() << endl;
    auto targetHeartRateRange = person1.calculateTargetHeartRateRange();
    cout << "Rango de frecuencia cardiaca objetivo: " << targetHeartRateRange.first << " - " << targetHeartRateRange.second << endl;
}
