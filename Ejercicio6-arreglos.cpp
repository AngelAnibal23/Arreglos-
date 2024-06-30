/*
Ejercicio 6:
Calcular la suma de componentes de índice par e impar en un vector.
*/

int suma_indices_pares(int x , int arreglo[]){
	int suma1=0; 

	for(int k=0; k<x; k++){
		if(k%2==0){
			suma1+=arreglo[k]; 
		}
	}
	
	return suma1; 
}

int suma_indices_impares(int x, int arreglo[]){
	int suma2=0; 
	for(int j=0; j<x; j++){
	
	if(j%2 != 0){
			suma2+=arreglo[j]; 
	}	
	}
	
	return suma2; 
}

#include <iostream>
using namespace std; 
int main(){
	int n, numeros[30], suma_p=0, suma_im=0;
	
	cout<<"Digite la cantidad de elementos que tendra el array: "; 
	cin>>n; 
	cout<<"\n"; 
	
	for(int i=0; i<n; i++){
		cout<<"Ingrese el elemento: "; 
		cin>>numeros[i]; 
	}
	
	suma_p = suma_indices_pares(n, numeros); 
	suma_im = suma_indices_impares(n, numeros); 
	
	cout<<"\nLa suma de elementos con indice par es: "<<suma_p<<endl; 
	cout<<"La suma de los elementos con indice impar es: "<<suma_im<<endl; 
	
	return 0; 
}
