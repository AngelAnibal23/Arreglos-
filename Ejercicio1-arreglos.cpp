/*
Ejercicio 1: 
Convertir palabras a mayusculas iniciales: "caceres patrimonio de la humanidad" 
  -> "Caceres Patrimonio De La Humanidad"
*/

#include <iostream>
#include <string.h>

using namespace std; 

void convertirMayusculas(char cadena[]){
	bool mayuscula=true; 
		
	for(int i=0; cadena[i] != '\0'; i++){
		if(cadena[i]== ' '){
			mayuscula=true; 
		}
		else if(mayuscula){
			cadena[i]=toupper(cadena[i]);
			mayuscula = false;
		}
	}
}


int main(){
	char cadena[]="caceres patrimonio de la humanidad"; 
	bool mayuscula=true; 
		
	convertirMayusculas(cadena); 
	
	cout<<cadena<<endl; 	

	return 0; 
}
