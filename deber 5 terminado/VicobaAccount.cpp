#include "VicobaAccount.h"

double VicobaAccount::annualInterestRate = 0.05; //representa el 5%

VicobaAccount::VicobaAccount() : loanAmount(0), loanDuration(0) {}

VicobaAccount::VicobaAccount(double amount, int duration) : loanAmount(amount), loanDuration(duration) {}

void VicobaAccount::setAnnualInterestRate(double rate) {
    annualInterestRate = rate;
}

double VicobaAccount::calculateRepayment() const {
    return loanAmount * (1 + annualInterestRate * loanDuration);
}

double VicobaAccount::getLoanAmount() const {
    return loanAmount;
}

void VicobaAccount::setLoanAmount(double amount) {
    loanAmount = amount;
}

int VicobaAccount::getLoanDuration() const {
    return loanDuration;
}

void VicobaAccount::setLoanDuration(int duration) {
    loanDuration = duration;
}

double VicobaAccount::getAnnualInterestRate() {
    return annualInterestRate;
}
