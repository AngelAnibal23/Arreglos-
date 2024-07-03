/*
Ejercicio 19: 
Escribir un programa que dada una frase, determine si es un pal�ndromo o no. Un pal�ndromo es una frase que, atendiendo s�lo a sus letras e ignorando los espacios, acentos, 
signos de puntuaci�n y tipo de letra (may�scula o min�scula) expresa lo mismo le�da de izquierda a derecha que de derecha a izquierda. �d�bale arroz a la zorra el abad�.
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

