/*
Ejercicio 11: 
Calcular la suma de elementos positivos y negativos en un arreglo.
*/

#include <iostream>
using namespace std; 
int main(){
	int suma_p=0, suma_n=0, n, numeros[30];
	
	cout<<"Digite la cantidad de elementos: ";
	cin>>n; 
	
	if(n<0){
		cout<<"El programa termino. "; 
		
		return 1; 
	}
	
	for(int i=0; i<n; i++){
		cout<<"Digite el elemento: "; 
		cin>>numeros[i]; 
		
		if(numeros[i]>0){
			suma_p+=numeros[i];
		}
		else if(numeros[i]<0){
			suma_n+=numeros[i]; 
		}
	} 
	
	cout<<"\nLa suma de los numeros positivos es: "<<suma_p<<endl; 
	cout<<"La suma de los numeros negativos es: "<<suma_n<<endl; 
	
	return 0; 
}
