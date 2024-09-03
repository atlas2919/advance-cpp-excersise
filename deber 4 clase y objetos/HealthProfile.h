#ifndef HEALTHPROFILE_H_INCLUDED
#define HEALTHPROFILE_H_INCLUDED

#include <string>

using namespace std;

class HealthProfile{

    public:
        // constructor vacio
        HealthProfile();

        //constructor con varios parametros // se usa el const para que sean parametros que no puedan ser modificados
        HealthProfile(const string &firstName, const string &lastName, char gender, //Gender M for male and F for Female
                      int birthDay, int birthMonth, int birthYear,
                      double heightInches, double weightPounds);
        //definiciones

        ////////////// set ///////////////////
        void setFirstName(const string &firstName);
        void setLastName(const string &lastName);
        void setGender(char gender);
        void setBirthYear(int birthYear);
        void setBirthMonth(int birthMonth);
        void setBirthDay(int birthDay);
        void setHeight(double heightInches);
        void setWeight(double weightPounds);
        //////////////////////////////////////

        ///////////// get ////////////////////
        string getFirstName() const; // const al final indica que no modifica los miembros de datos de la clase
        string getLastName() const;
        char getGender() const;
        int getBirthYear() const;
        int getBirthMonth() const;
        int getBirthDay() const;
        double getHeight() const;
        double getWeight() const;
        /////////////////////////////////////

        //funciones de calculo
        int calculateAge() const;
        double calculateBMI() const;
        int calculateMaxHeartRate() const;
        pair <int, int> calculateTargetHeartRateRange() const; // pair sirve para un par ordenado en este caso enteros ambos

    private:
        string firstName;
        string lastName;
        char gender;
        int birthMonth;
        int birthDay;
        int birthYear;
        double heightInches;
        double weightPounds;

};



#endif // HEALTHPROFILE_H_INCLUDED
