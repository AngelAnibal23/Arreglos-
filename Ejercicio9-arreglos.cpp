/*
Ejercicio 9:
Rotar las componentes de un vector una posición hacia la derecha.
*/

#include  <iostream>
using namespace std; 

int main(){								
	int	n; 			
	
	cout<<"Digite la cantidad de elementos que tendra el arreglo: "; 
	cin>>n; 
	
	int numeros[n]; 
	
	for(int i=0; i<n; i++){
		cout<<"Digite el elemento: ";
		cin>>numeros[i];  
	}
	
	cout<<"\n"; 
	cout<<"Elementos del arreglo antes del movimiento: "<<endl; 
	for(int i=0; i<n; i++){
		cout<<numeros[i]<<" "; 
	}
	cout<<"\n"; 
	int numeros2[n]; 
	
	for(int i=0; i<n; i++){
		
		numeros2[i+1]=numeros[i]; 
		
		if(i==n-1){
  		   numeros2[0]=numeros[n-1];	  
		}	
	}
	
	cout<<"\n"; 
	cout<<"Elementos del arreglo despues del movimiento: "<<endl; 
	for(int i=0; i<n; i++){
		cout<<numeros2[i]<<" "; 
	}
	 
	
	return 0; 
}
