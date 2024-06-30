/*
Ejercicio 5: 
Programa que lee n números, encuentra el mayor y el menor, y cuenta sus repeticiones.
*/

#include <iostream>
using namespace std; 


int repeticiones(int arreglo[], int tamano, int x){
	int contador=0;
	
	for(int i=0; i<tamano ; i++){
		
		// x es el numero mayor o menor. 
		
		if(x==arreglo[i]){
			contador++;
		}
	}
	
	return contador; 
}

int main(){
	int array[40], cantidad_elementos, repeticiones_menores, repeticiones_mayores; 
	
	cout<<"Digite la cantidad de elementos que tendra el arreglo: "; 
	cin>>cantidad_elementos; 
	
	for(int i=0; i<cantidad_elementos ; i++){
		cout<<"Digite el elemento: "; 
		cin>>array[i]; 	
	}
	
	int tamano = sizeof(array)/ sizeof(array[0]); 
	
	int mayor=array[0], menor=array[0]; 
	
	for(int i=0; i<cantidad_elementos; i++){
 		if(array[i]>=mayor){
 			mayor=array[i]; 
 		}
 		
 		if(array[i]<=menor){
 			menor=array[i]; 
 		}
	}
	
	repeticiones_mayores = repeticiones(array, tamano, mayor); 
	repeticiones_menores = repeticiones(array, tamano, menor); 
	
	
	cout<<"\nEl elemento mayor es: "<<mayor<<". Se repite: "<<repeticiones_mayores<<" veces."<<endl; 
	cout<<"El elemento menor es: "<<menor<<". Se repite: "<<repeticiones_menores<<" veces."<<endl; 
	
	return 0; 
}
