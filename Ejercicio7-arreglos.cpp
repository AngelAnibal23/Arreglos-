/*
Ejercicio 7:
Invertir un vector e imprimirlo.
*/

#include <iostream>
using namespace std; 
int main(){
	int n;
	
	cout<<"Digite la cantidad de elementos que tendra su arreglo: "; 
	cin>>n; 
	
	int numeros1[n], numeros2[n];
	
	for(int i=0; i<n; i++){
	    cout<<"Ingrese el elemento: "; 
	    cin>>numeros1[i]; 
	}
	
	//Llenando el vector 1 
	cout<<endl; 
	cout<<"Elementos del vector1: "<<endl;
	for(int i=0; i<n; i++){
	    cout<<"Elemento: "<<numeros1[i]<<endl;
	}
	
	//Invirtiendo el vector 1 en el vector 2
	for(int j=0; j<n; j++){
		numeros2[n-1-j]=numeros1[j];
	}
	
	cout<<endl;
	cout<<"Elementos del vector2: "<<endl;
	for(int i=0; i<n; i++){
	    cout<<"Elemento: "<<numeros2[i]<<endl;
	}
	
	return 0; 
}
