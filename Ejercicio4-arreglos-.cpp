/*
Ejercicio 4: 
Leer una secuencia de nombres, ordenarlos alfabéticamente y presentarlos.
*/

#include <iostream>
#include <string.h>

using namespace std;

int main() {
    char nombre[50]; 
    char cadena[50]; 

    cout << "Ingrese el primer nombre: ";
    cin >> nombre;

    while (true) {
        char nuevoNombre[50];
        cout << "Ingrese el siguiente nombre (o pulse Enter para terminar): ";
        cin >> nuevoNombre;

        if (strcmp(nuevoNombre, "") == 0) break; 

        if (strcmp(nuevoNombre, nombre) < 0) {
            strcpy(cadena, nombre);
            strcpy(nombre, nuevoNombre);
            strcpy(nuevoNombre, cadena);
        }

        cout << "Nombre actual: " << nombre << endl;
    }

    cout << "Nombre ordenado alfabéticamente: " << nombre << endl;

    return 0;
}
