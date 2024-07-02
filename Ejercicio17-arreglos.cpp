/*
Ejercicio 17:
Escriba una función que dado el nombre completo de una persona y un apellido, compruebe si el apellido pertenece a esa persona.
*/

#include <iostream>
#include <string.h> 

using namespace std;

//Creamos una funcion que retornara un valor booleando
bool comprobarApellido(char nombreCompleto[],char apellido[]) {
    int tamNombre = strlen(nombreCompleto);
    int tamApellido = strlen(apellido);
    
    int j = tamApellido - 1;
    for (int i = tamNombre - 1; i >= 0; i--) {
        if (nombreCompleto[i] == ' ') {
            if (j == -1) {
                return true;
            } else {
                return false;
            }
        }
        if (j >= 0 && nombreCompleto[i] == apellido[j]) {
            j--;
        } else if (j >= 0 && nombreCompleto[i] != apellido[j]) {
            return false;
        }
    }
    
    return j == -1;
}

int main() {
    char nombreCompleto[100], apellido[30]; 
    
    cout << "Digite su nombre completo: " << endl; 
    cin.getline(nombreCompleto, 100);
    cout << "Digite el apellido a comprobar: " << endl; 
    cin.getline(apellido, 30);
    
    
    //Condicional que solo necesita el valor de la funcion 
    if (comprobarApellido(nombreCompleto, apellido)) {
        cout << "El apellido pertenece a la persona." << endl;
    } else {
        cout << "El apellido no pertenece a la persona." << endl;
    }
    
    return 0;
}
