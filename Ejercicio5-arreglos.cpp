/*
Ejercicio 5: 
Programa que lee n números, encuentra el mayor y el menor, y cuenta sus repeticiones.
*/

#include <iostream>
using namespace std; 

int repeticiones(int arreglo[], int tam, int numero){
	int cont=0;
	
	for(int i=0; i<tam ; i++){
		if(numero==arreglo[i]){
			cont++;
		}
	}
	
	return cont; 
}

int main(){
	int array[40], n, cont=0, repe_men, repe_may; 
	
	cout<<"Digite la cantidad de elementos que tendra el arreglo: "; 
	cin>>n; 
	
	for(int i=0; i<n ; i++){
		cout<<"Digite el elemento: "; 
		cin>>array[i]; 	
	}
	
	int tam = sizeof(array)/ sizeof(array[0]); 
	
	int mayor=array[0], menor=array[0]; 
	
	for(int i=0; i<n; i++){
 		if(array[i]>=mayor){
 			mayor=array[i]; 
 		}
 		
 		if(array[i]<=menor){
 			menor=array[i]; 
 		}
	}
	
	repe_may = repeticiones(array, tam, mayor); 
	repe_men = repeticiones(array, tam, menor); 
	
	
	cout<<"\nEl elemento mayor es: "<<mayor<<". Se repite: "<<repe_may<<" veces."<<endl; 
	cout<<"El elemento menor es: "<<menor<<". Se repite: "<<repe_men<<" veces."<<endl; 
	
	return 0; 
}
