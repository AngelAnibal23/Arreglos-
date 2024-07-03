/*
Ejercicio 19: 
Escribir un programa que dada una frase, determine si es un palíndromo o no. Un palíndromo es una frase que, atendiendo sólo a sus letras e ignorando los espacios, acentos, 
signos de puntuación y tipo de letra (mayúscula o minúscula) expresa lo mismo leída de izquierda a derecha que de derecha a izquierda. “dábale arroz a la zorra el abad”.
*/

#include <iostream>
#include <cstring>
#include <string.h>

using namespace std;

bool Palindromo(char *frase) {
    int izquierda = 0;
    int derecha = strlen(frase) - 1;

    while (izquierda < derecha) {
        while (!((frase[izquierda] >= 'a' && frase[izquierda] <= 'z') || (frase[izquierda] >= 'A' && frase[izquierda] <= 'Z')) && izquierda < derecha) {
            izquierda++;
        }
        while (!((frase[derecha] >= 'a' && frase[derecha] <= 'z') || (frase[derecha] >= 'A' && frase[derecha] <= 'Z')) && izquierda < derecha) {
            derecha--;
        }

        if (frase[izquierda] != frase[derecha] && frase[izquierda] != frase[derecha] - ('a' - 'A') && frase[izquierda] - ('a' - 'A') != frase[derecha]) {
            return false;
        }
        
        
        izquierda++;
        derecha--;
    }

    return true;
}

int main() {
    char frase[1000];

    cout << "Ingrese una frase para verificar si es un palindromo: ";
    cin.getline(frase, 1000);

    if (Palindromo(frase)) {
        cout << "La frase ingresada es un palindromo." << endl;
    } else {
        cout << "La frase ingresada NO es un palindromo." << endl;
    }

    return 0;
}

