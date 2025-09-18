#include "sorting.h"
#include <algorithm>
#include <vector>
#include <iostream>
#include <random> 
#include <algorithm> 

using namespace std;

void sorting::bubbleSort(vector<int>& arr) {
    int len = arr.size(); // guardamos el tamaño del array
    for (int i = 0; i < len - 1; i++){ // bucle que recorre todo el array
        bool swapped = false; //variable boleana para saber si se hizo un intercambio
        for (int j = 0; j < len - 1 - i; j ++){ // bucle que recorre desde el inicio hasta el ultimo elemento ordenado
            if (arr[j] > arr[j + 1]){ // si el elemento actual es mayor que el siguiente, se realiza un intercambio
                swap(arr[j], arr[j + 1]);
                swapped = true; // se pone true en la variable boleana para saber que hizo un intercambio
            }
        }
        if (!swapped) break; // si no se hizo ningun intercambio, el array ya esta ordenado y se sale del bucle
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

void sorting::insertionSort(std::vector<int>& arr){
    int size = arr.size();
    for (int i = 1; i < size; ++i) {
        int key = arr[i];  // Elemento a insertar
        int j = i - 1;

        // Desplazar los elementos mayores que key hacia la derecha
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            --j;
        }

        // Insertar el elemento en su posición correcta
        arr[j + 1] = key;
    }
}


int sorting::partition_quick(std::vector<int>& arr,int left,int right){
    int pivot = arr[right]; //se elige el último elemento como pivote (puede ser cualquier otro)
    int i = left - 1; // índice del elemento más pequeño
    for (int j = left; j < right; j++){ //recorre desde el primer elemento hasta el anterior al pivote, en este caso el ultimo
        if (arr[j] < pivot){ //si el elemento actual es menor que el pivote, se incrementa i y el elemento actual se intercambia con el elemento en la posición i
            i ++;
            swap(arr[i],arr[j]);  
        }
    }
    swap(arr[i + 1], arr[right]); // la posicion i es el último elemento menor que el pivote, por lo que se el pivote se cambia con el elemento en la posicion i+1
    return (i + 1); //se retorna la posición del pivote
}

void sorting::quickSort(std::vector<int>& arr,int left,int right){

    if (right > left){ // condición de parada si el array o subarray tiene 1 o 0 elementos
        
        int pivot_index = partition_quick(arr,left,right); //se obtiene el indice del pivote llamando a la funcnión auxiliar
        
        quickSort(arr,left,pivot_index - 1); //llamadas recursivas a la función quicksort, la izquierda va desde left hasta pivot_index - 1
        quickSort(arr,pivot_index + 1, right); //la derecha va desde pivot_index + 1 hasta right
        
    } 
    
}

void sorting::random_vector(vector<int>& arr){
    random_device rd; // semilla para el generador de números aleatorios
    mt19937 gen(rd()); // generador de números aleatorios
    uniform_int_distribution<> distrib(0, 50); //definicion del rango de numeros aleatorios

    // Ajustamos el tamaño del vector arr a 15
    arr.resize(15);

    // Llenamos arr directamente
    generate(arr.begin(), arr.end(), [&]() {
        return distrib(gen);
    });
}