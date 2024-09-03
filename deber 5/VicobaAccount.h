#ifndef VICOBAAccount_H
#define VICOBAAccount_H

class VicobaAccount {
private:
    double loanAmount;
    int loanDuration;
    static double annualInterestRate;

public:
    VicobaAccount(); // Constructor vac�o
    VicobaAccount(double amount, int duration); // Constructor con par�metros
    static void setAnnualInterestRate(double rate);
    double calculateRepayment() const;
    double getLoanAmount() const;
    void setLoanAmount(double amount);
    int getLoanDuration() const;
    void setLoanDuration(int duration);
    static double getAnnualInterestRate();
};

#endif //VICOBAAccount_H
