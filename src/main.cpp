#include "sorting.h"
#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

//array ya ordenado para probar los algoritmos
vector<int> array_ordenado = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; 
// array de unidad para probar los algoritmos
vector<int> array_unidad = {1}; 

int main() {
    vector<int> arr; // vector para almacenar los números aleatorios
    sorting sort; // crear una instancia de la clase sorting

    //bubble sort
    sort.random_vector(arr); // llenar el vector con números aleatorios
    cout << "Array antes de Bubble Sort: ";
    for (const auto& num : arr) {
        cout << num << " "; // imprimir el array antes de ordenar
    }
    cout << endl;
    sort.bubbleSort(arr); // llamar al método bubbleSort para ordenar el array
    cout << "Array después de Bubble Sort: ";
    for (const auto& num : arr) {
        cout << num << " "; // imprimir el array después de ordenar
    }

    sort.bubbleSort(array_ordenado); // probar con el array ya ordenado y con el array de unidad
    sort.bubbleSort(array_unidad);
    cout << endl << "Array ordenado de 1 a 15 después de Bubble Sort: ";
    //imprimir ambos arrays para verificar que siguen igual y que no tronó el código
    for (const auto& num : array_ordenado) {
        cout << num << " ";
    }
    cout << endl << "Array unidad después de Bubble Sort: ";
    for (const auto& num : array_unidad) {
        cout << num << " ";
    }
    cout << endl << endl;

    //selection sort
    sort.random_vector(arr); // llenar el vector con números aleatorios
    cout << "Array antes de Selection Sort: ";
    for (const auto& num : arr) {
        cout << num << " "; // imprimir el array antes de ordenar
    }
    cout << endl;
    sort.selectionSort(arr); // llamar al método selectionSort para ordenar el array
    cout << "Array después de Selection Sort: ";
    for (const auto& num : arr) {
        cout << num << " "; // imprimir el array después de ordenar
    }
    sort.selectionSort(array_ordenado); // probar con el array ya ordenado y con el array de unidad
    sort.selectionSort(array_unidad);
    cout << endl << "Array ordenado de 1 a 15 después de Selection Sort: ";
    for (const auto& num : array_ordenado) {
        cout << num << " "; // imprimir el array ordenado después de selectionSort
    }
    cout << endl << "Array unidad después de Selection Sort: ";
    for (const auto& num : array_unidad) {
        cout << num << " "; // imprimir el array de unidad después de selectionSort
    }
    cout << endl << endl;

    //insertion sort
    sort.random_vector(arr); // llenar el vector con números aleatorios
    cout << "Array antes de Insertion Sort: ";
    for (const auto& num : arr) {
        cout << num << " "; // imprimir el array antes de ordenar
    }
    cout << endl;
    sort.insertionSort(arr); // llamar al método insertionSort para ordenar el array
    cout << "Array después de Insertion Sort: ";
    for (const auto& num : arr) {
        cout << num << " "; // imprimir el array después de ordenar
    }

    sort.insertionSort(array_ordenado); // probar con el array ya ordenado y con el array de unidad
    sort.insertionSort(array_unidad);
    cout << endl << "Array ordenado de 1 a 15 después de Insertion Sort: ";
    for (const auto& num : array_ordenado) {
        cout << num << " "; // imprimir el array ordenado después de insertionSort
    }
    cout << endl << "Array unidad después de Insertion Sort: ";
    for (const auto& num : array_unidad) {
        cout << num << " "; // imprimir el array de unidad después de insertionSort
    }
    cout << endl << endl;

    //merge sort
    sort.random_vector(arr); // llenar el vector con números aleatorios
    cout << "Array antes de Merge Sort: ";
    for (const auto& num : arr) {
        cout << num << " "; // imprimir el array antes de ordenar
    }
    cout << endl;
    sort.mergeSort(arr, 0, arr.size() - 1); // llamar al método mergeSort para ordenar el array
    cout << "Array después de Merge Sort: ";
    for (const auto& num : arr) {
        cout << num << " "; // imprimir el array después de ordenar
    }
    sort.mergeSort(array_ordenado, 0, array_ordenado.size() - 1); // probar con el array ya ordenado y con el array de unidad
    sort.mergeSort(array_unidad, 0, array_unidad.size() - 1);
    cout << endl << "Array ordenado de 1 a 15 después de Merge Sort: ";
    for (const auto& num : array_ordenado) {
        cout << num << " "; // imprimir el array ordenado después de mergeSort
    }
    cout << endl << "Array unidad después de Merge Sort: ";
    for (const auto& num : array_unidad) {
        cout << num << " "; // imprimir el array de unidad después de mergeSort
    }
    cout << endl << endl;

    //quick sort
    sort.random_vector(arr); // llenar el vector con números aleatorios
    cout << "Array antes de Quick Sort: ";
    for (const auto& num : arr) {
        cout << num << " "; // imprimir el array antes de ordenar
    }
    cout << endl;
    sort.quickSort(arr, 0, arr.size() - 1); // llamar al método quickSort para ordenar el array
    cout << "Array después de Quick Sort: ";
    for (const auto& num : arr) {
        cout << num << " "; // imprimir el array después de ordenar
    }
    sort.quickSort(array_ordenado, 0, array_ordenado.size() - 1); // probar con el array ya ordenado y con el array de unidad
    sort.quickSort(array_unidad, 0, array_unidad.size() - 1);
    cout << endl << "Array ordenado de 1 a 15 después de Quick Sort: ";
    for (const auto& num : array_ordenado) {
        cout << num << " "; // imprimir el array ordenado después de quickSort
    }
    cout << endl << "Array unidad después de Quick Sort: ";
    for (const auto& num : array_unidad) {
        cout << num << " "; // imprimir el array de unidad después de quickSort
    }
    cout << endl << endl;

    return 0;
}