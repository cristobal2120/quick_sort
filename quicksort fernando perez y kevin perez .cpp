#include <iostream>
#include <cstdlib>// manejar las casillas 
#include <ctime>// para que pueda arrojar los datos random

using namespace std;

void quicksort(int arreglo[], int izquierda, int derecha) {
    if (izquierda < derecha) {
        int pivote = arreglo[derecha];

        int i = izquierda;

        for (int j = izquierda; j < derecha; j++) {
            if (arreglo[j] <= pivote) {
                swap(arreglo[i], arreglo[j]);
                i++;
            }
        }

        swap(arreglo[i], arreglo[derecha]);  // metodo para 

        quicksort(arreglo, izquierda, i - 1); // ordenar los datos
        quicksort(arreglo, i + 1, derecha); // aleatios que me de el programa 
    }
}

int main() {
    srand(static_cast<unsigned>(time(nullptr))); // funcion para que comiencen los datos aleatorios con una semilla
    const int tamano = 20;
    int arreglo[tamano];

    for (int i = 0; i < tamano; i++) {
        arreglo[i] = rand() % 100;
    }



// pedazp de imprimir 
    cout << "Arreglo generado con valores aleatorios:" << endl;
    for (int i = 0; i < tamano; i++) {
        cout << arreglo[i] << " ";
    }
    cout << endl;

    quicksort(arreglo, 0, tamano - 1);

    cout << "Arreglo ordenado con Quicksort:" << endl;
    for (int i = 0; i < tamano; i++) {
        cout << arreglo[i] << " ";
    }
    cout << endl;

    return 0;
}
// hecho por fernando perez y kevin perez 
// hecho por fernando perez y kevin perez 
// hecho por fernando perez y kevin perez 