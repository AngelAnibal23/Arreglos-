/*
Ejercicio 9:
Rotar las componentes de un vector una posición hacia la derecha.
*/

#include  <iostream>
using namespace std; 

int main(){								
	int	tam, numeros[]={1,2,3,4,5,6,7,8,9,10};			
	
	tam=sizeof(numeros)/sizeof(numeros[0]); 
	
	cout<<"Elementos del arreglo antes del movimiento: "<<endl; 
	for(int i=0; i<tam; i++){
		cout<<numeros[i]<<" "; 
	}
	cout<<"\n"; 
	int numeros2[tam]; 
	
	for(int i=0; i<tam; i++){
		
		
		numeros2[i+1]=numeros[i]; 
		
		if(i==tam-1){
  		   numeros2[0]=numeros[tam-1];	  
		}	
	}
	
	cout<<"\n"; 
	cout<<"Elementos del arreglo despues del movimiento: "<<endl; 
	for(int i=0; i<tam; i++){
		cout<<numeros2[i]<<" "; 
	}
	 
	
	return 0; 
}
