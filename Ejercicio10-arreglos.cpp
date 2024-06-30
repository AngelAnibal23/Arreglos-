#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    const int n = 30;
    double numeros[n], suma = 0, aux;
    double moda, mediana, media;
    int contador1 = 0, contador2 = 0;
    
    srand(time(0));
    cout << "Los numeros generados son: " << endl;
    for (int i = 0; i < n; i++) {
        numeros[i] = 100 + rand() % (1000 + 1 - 100);
        cout << numeros[i] << " ";
    }
    cout << endl;
    
    for (int i = 0; i < n; i++) {
        suma += numeros[i];
    }
    media = suma / n;
    
    for (int i = 0; i < n - 1; i++) {
        for (int k = 0; k < n - 1 - i; k++) {
            if (numeros[k] > numeros[k + 1]) {
                aux = numeros[k];
                numeros[k] = numeros[k + 1];
                numeros[k + 1] = aux;
            }
        }
    }
    cout << "Ordenamos el arreglo para sacar la moda y la mediana: " << endl;
    for (int i = 0; i < n; i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;
    
    mediana = (numeros[14] + numeros[15]) / 2.0;
    
    for (int j = 0; j < n; j++) {
        contador1 = 0;
        for (int i = 0; i < n; i++) {
            if (numeros[j] == numeros[i] && j != i) {
                contador1++;
            }
        }
        if (contador1 > contador2) {
            contador2 = contador1;
            moda = numeros[j];
        }
    }
    cout<< endl;
    cout<< "Mediana: " << mediana << endl;
    cout<< "Media: " << media << endl;
    cout<< "Moda: " << moda << endl;
    
    return 0;
}

