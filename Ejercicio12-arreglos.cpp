/*
Ejercicio 12:
Implementar una función que reciba un vector, su longitud y retorne true si el mismo se encuentra ordenado, 
false en caso contrario.
*/

#include <iostream>
using namespace std; 

bool ordendelvector(int arreglo[], int x){ 
	for(int i=0; i<x-1; i++){
		if(arreglo[i]>arreglo[i+1]){
			return false; 
		}
	}
	
}


int main(){
	int n, tamano, orden; 
	
	cout<<"Digite la cantidad de elementos que tendra el arreglo: "; 
	cin>>n; 
	
	int numeros[n]; 
	
	for(int i=0; i<n;i++){
		cout<<"Digite el elemento: "; 
		cin>>numeros[i]; 
	}

	tamano=sizeof(numeros)/sizeof(numeros[0]); 
	
	orden = ordendelvector(numeros, tamano); 
	
	
	cout<<endl; 
	
	cout<<endl; 
	if(orden==1){
		cout<<"\nEl arreglo esta ordenado. "; 
	}
	else{
		cout<<"\nEl arreglo no esta ordenado. ";
	}
	
	return 0; 
}
