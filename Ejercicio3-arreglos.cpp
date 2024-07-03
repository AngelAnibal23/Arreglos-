/*
Ejercicio 3: 
Contar la ocurrencia de una letra específica en una cadena de entrada
*/

#include <iostream>
#include <string.h>
#include <cstring>
using namespace std; 
int main(){
	char letra, palabra[100]; 
	int cont=0; 
	
	cout<<"Digite su cadena: "; 
	cin.getline(palabra,100); 
	cout<<endl; 
	cout<<"Que letra le gustaria comparar: "; 
	cin>>letra; 
	
	for(int i=0; palabra[i] != '\0'; i++){
		if(letra==palabra[i]){
			cont++; 
		}
	}
	cout<<endl; 
	
	if(cont==1){
	cout<<"La letra elegida: "<<letra<<". Se repite : "<<cont<<" vez "<<endl; 
	}
	else{
		cout<<"La letra elegida: "<<letra<<". Se repite : "<<cont<<" veces "<<endl; 
	}
	
	
	return 0; 
}
