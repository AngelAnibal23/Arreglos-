/*
Ejercicio 15: 
Generar la función mistrcmp(str1,str2) que compara dos cadenas y retorna los resultados 0 si las cadenas son iguales, 1 si la cadena str1 >str2, -1 si la cadena str2>str1. 
No usar las funciones de String.h
*/

#include <iostream>

using namespace std;

int generandoMistrcmp(char* str1,char* str2) {
    int i = 0;
    while (str1[i] != '\0' || str2[i] != '\0') {
        if (str1[i] == str2[i]) {
            i++;
        } else if (str1[i] > str2[i]) {
            return 1;
        } else {
            return -1;
        }
    }
    return 0;
}

int main() {
    char cadena1[100], cadena2[100];

    cout << "Ingrese la primera cadena: ";
    cin.getline(cadena1, 100);

    cout << "Ingrese la segunda cadena: ";
    cin.getline(cadena2, 100);

    int resultado = generandoMistrcmp(cadena1, cadena2);

    if (resultado == 0) {
        cout << "Las cadenas son iguales." << endl;
    } else if (resultado == 1) {
        cout << "La primera cadena es mayor que la segunda." << endl;
    } else {
        cout << "La segunda cadena es mayor que la primera." << endl;
    }

    return 0;
}

