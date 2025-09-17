#include "sorting.h"
#include <algorithm>
#include <vector>
#include <iostream>
#include <random> 
#include <algorithm> 

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


int sorting::partition_quick(std::vector<int>& arr,int left,int right){
    int pivot = arr[right];
    int i = left - 1;
    for (int j = left; j < right; j++){
        if (arr[j] < pivot){
            i ++;
            swap(arr[i],arr[j]);  
        }
    } 
    swap(arr[i + 1], arr[right]);
    return (i + 1);
}

void sorting::quickSort(std::vector<int>& arr,int left,int right){
    
    if (right > left){
        
        int pivot_index = partition_quick(arr,left,right);
        
        quickSort(arr,left,pivot_index - 1);
        quickSort(arr,pivot_index + 1, right);
        
    } 
    
}

void sorting::random_vector(vector<int>& arr){
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distrib(0, 50); 

    // Ajustamos el tamaño del vector arr a 15
    arr.resize(15);

    // Llenamos arr directamente
    generate(arr.begin(), arr.end(), [&]() {
        return distrib(gen);
    });
}