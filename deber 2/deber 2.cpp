// Leer un archivo de texto y contar el numero de: lineas, palabras de 3,4,5 o mas caracteres.

#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

using namespace std;

int main(){

    ifstream texto("apuntes_programacion_avanzada.txt"); // Lee el archivo de texto

    // Variables
    string linea;
    int num_linea{0};

    // Contadores de palabras de diferentes longitudes (3, 4, 5, más)
    int* contadorPalabras = new int[4] {0}; // Inicializado a cero

    // Programa
    while (getline(texto, linea)) {
        num_linea++; // Contador de línea

        istringstream extrae(linea); // Se usa istringstream para extraer palabras de una línea
        string palabra;

        // Determina la longitud de la palabra y agrega 1 al contador de la palabra correspondiente
        while (extrae >> palabra) {
            int longitud = palabra.length();

            if (longitud == 3) {
                contadorPalabras[0]++;
            } else if (longitud == 4) {
                contadorPalabras[1]++;
            } else if (longitud == 5) {
                contadorPalabras[2]++;
            } else if (longitud > 5) {
                contadorPalabras[3]++;
            }
        }
    }

    texto.close(); // Cerramos el archivo para liberar recursos

    // Mostrar los resultados
    cout << "Numero de lineas: " << num_linea << endl;
    cout << "Numero de palabras de 3 caracteres: " << contadorPalabras[0] << endl;
    cout << "Numero de palabras de 4 caracteres: " << contadorPalabras[1] << endl;
    cout << "Numero de palabras de 5 caracteres: " << contadorPalabras[2] << endl;
    cout << "Numero de palabras de mas de 5 caracteres: " << contadorPalabras[3] << endl;

    // Liberar la memoria asignada
    delete[] contadorPalabras;
    contadorPalabras = 0;

    return 0;
}
