#include <iostream>

//librerias necesarias
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    // Nombre del archivo CSV
    string filename = "resuelto2.csv";

    // Abrir el archivo
    ifstream file(filename);

    // Verificar si el archivo se pudo abrir correctamente
    if (!file.is_open()) {
        cout << "Error al abrir el archivo: " << filename << endl;
        return 1;
    }

    // Leer linea por linea y mostrar su contenido como tabla
    string line;
    while (getline(file, line)) {
        // Crear un stringstream para procesar la linea
        stringstream ss(line);

        // Imprimir cada campo de la linea como una celda de la tabla
        string field;
        while (getline(ss, field, ',')) {
            cout << setw(12) << left << field;
        }
        cout << endl;
    }

    // Cerrar el archivo por sanidad
    file.close();

    return 0;
}
