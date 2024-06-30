/*
Ejercicio 8:
Comprobar si un número de 10 cifras es capicúa usando un vector.
*/

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std; 
int main(){
	int capicua[10], cont=0; 
	
	cout<<"Ingrese 10 numeros para comprobar si es capicua o no: "<<endl; 
	for(int i=0; i<10; i++){
		cout<<"Ingrese el elemento: "; 
		cin>>capicua[i]; 
	}
	
	cout<<endl; 
	cout<<"El numero es: ";
	for(int j=0; j<10; j++){
		cout<<capicua[j]; 
	}
	
	for(int i=0; i<5; i++){
		if(capicua[i]==capicua[9-i]){
			cont++; 
		}
	}
	
	cout<<endl; 
	if(cont==5){
		cout<<"\nEl numero cumple con las caracteristicas de un capicua. "; 
	}
	else{
		cout<<"\nEl numero no es capicua. ";
	}
	
	
	return 0; 
}
