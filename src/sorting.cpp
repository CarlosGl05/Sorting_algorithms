#include "sorting.h"
#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

void sorting::bubbleSort(vector<int>& arr) {
    int len = arr.size();
    for (int i = 0; i < len - 1; i++){
        bool swapped = false;

        for (int j = 0; j < len - 1 - i; j ++){
            if (arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) break;
    }


}

// Función para realizar el ordenamiento por selección
void sorting::selectionSort(std::vector<int>& arr){
    int n = arr.size(); // Tamaño del array

    // Bucle para recorrer todos los elementos del array
    for(int i=0; i<n-1; i++){
        int IndexMin=i; // Indice para guardar el elemento mínimo

        //Bucle para encontrar el elemento mas pequeño (mínimo) en el array
        for(int j=i+1; j<n; j++){ // se inicia desde i+1 porque el primer elemento ya se considera el mínimo
            if(arr[j]<arr[IndexMin]){ // Si el elemento actual es menor que el mínimo encontrado
                IndexMin=j; // Actualiza el indice del mínimo
            }
        }
        if(IndexMin!=i){ // Si el índice del mínimo es diferente del índice actual, se realiza el intercambio
            std::swap(arr[i], arr[IndexMin]);
        }
}
}   