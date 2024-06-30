/*
Ejercicio 8:
Comprobar si un número de 10 cifras es capicúa usando un vector.
*/

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std; 
int main(){
	int capicua[10]={1,2,3,4,5,5,4,3,2,1}, cont=0; 
	

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
