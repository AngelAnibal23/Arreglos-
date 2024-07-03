/*
Ejercicio 2: 
Programa que haga "eco" de la entrada, poniendo cada palabra en una línea separada.
*/

#include <iostream>
#include <string.h>
#include <cctype>

using namespace std; 
int main(){
	char cadena[50]; 
	
	cout<<"Digite su cadena de texto: "; 
	cin.getline(cadena,50); 
	
	cout<<endl; 
	for(int i=0; cadena[i] != '\0'; i++){
		if(cadena[i]==' '){
			cout<<endl; 
		} 
		 
		else{
			
			cout<<cadena[i]; 
		}
	} 
	
	cout<<endl; 
	
	return 0; 
}


