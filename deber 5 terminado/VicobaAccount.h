#ifndef VICOBAACCOUNT_H_INCLUDED
#define VICOBAACCOUNT_H_INCLUDED

#include <iostream>

using namespace std;

class VicobaAccount {

private:
    double loanAmount;
    int loanDuration;
    static double annualInterestRate;

public:
    VicobaAccount(); // Constructor vacío
    VicobaAccount(double amount, int duration); // Constructor con parámetros

    //definicion
    static void setAnnualInterestRate(double rate);
    double calculateRepayment() const;
    double getLoanAmount() const;
    void setLoanAmount(double amount);
    int getLoanDuration() const;
    void setLoanDuration(int duration);
    static double getAnnualInterestRate();

};


#endif // VICOBAACCOUNT_H_INCLUDED
