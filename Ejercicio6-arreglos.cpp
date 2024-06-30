/*
Ejercicio 6:
Calcular la suma de componentes de índice par e impar en un vector.
*/

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
		
		if(i%2==0){
			suma_p+=numeros[i]; 
		}
		else{
			suma_im+=numeros[i];
		}
	}
	
	cout<<"\nLa suma de elementos con indice par es: "<<suma_p<<endl; 
	cout<<"La suma de los elementos con indice impar es: "<<suma_im<<endl; 
	
	return 0; 
}
