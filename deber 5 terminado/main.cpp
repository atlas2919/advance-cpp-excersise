#include "VicobaAccount.h"

//librerias necesarias para generar numeros aleatorios
#include <cstdlib>
#include <ctime>

int main() {
    // configurar la semilla
    srand(time(0));

    // Crear cuenta vacia con valores aleatorios
    double randomAmount = (rand() % 10000) + 1000; // monto aleatorio entre $1000 y $11000
    int randomDuration = (rand() % 10) + 1; // duracion aleatoria entre 1 y 10 años
    VicobaAccount account1(randomAmount, randomDuration);
    cout << "Random loan amount: $" << account1.getLoanAmount() << ", Random loan duration: " << account1.getLoanDuration() << " years" << endl;
    cout << "Repayment amount: $" << account1.calculateRepayment() << endl;

    return 0;
}
