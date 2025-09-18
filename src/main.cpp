#include "sorting.h"
#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

vector<int> array_ordenado = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
vector<int> array_unidad = {1};

int main() {
    vector<int> arr;
    sorting sort;

    //bubble sort
    sort.random_vector(arr);
    cout << "Array antes de Bubble Sort: ";
    for (const auto& num : arr) {
        cout << num << " ";
    }
    cout << endl;
    sort.bubbleSort(arr);
    cout << "Array después de Bubble Sort: ";
    for (const auto& num : arr) {
        cout << num << " ";
    }

    sort.bubbleSort(array_ordenado);
    sort.bubbleSort(array_unidad);
    cout << endl << "Array ordenado de 1 a 15 después de Bubble Sort: ";
    for (const auto& num : array_ordenado) {
        cout << num << " ";
    }
    cout << endl << "Array unidad después de Bubble Sort: ";
    for (const auto& num : array_unidad) {
        cout << num << " ";
    }
    cout << endl << endl;

    //selection sort
    sort.random_vector(arr);
    cout << "Array antes de Selection Sort: ";
    for (const auto& num : arr) {
        cout << num << " ";
    }
    cout << endl;
    sort.selectionSort(arr);
    cout << "Array después de Selection Sort: ";
    for (const auto& num : arr) {
        cout << num << " ";
    }
    sort.selectionSort(array_ordenado);
    sort.selectionSort(array_unidad);
    cout << endl << "Array ordenado de 1 a 15 después de Selection Sort: ";
    for (const auto& num : array_ordenado) {
        cout << num << " ";
    }
    cout << endl << "Array unidad después de Selection Sort: ";
    for (const auto& num : array_unidad) {
        cout << num << " ";
    }
    cout << endl << endl;

    //insertion sort
    sort.random_vector(arr);
    cout << "Array antes de Insertion Sort: ";
    for (const auto& num : arr) {
        cout << num << " ";
    }
    cout << endl;
    sort.insertionSort(arr);
    cout << "Array después de Insertion Sort: ";
    for (const auto& num : arr) {
        cout << num << " ";
    }

    sort.insertionSort(array_ordenado);
    sort.insertionSort(array_unidad);
    cout << endl << "Array ordenado de 1 a 15 después de Insertion Sort: ";
    for (const auto& num : array_ordenado) {
        cout << num << " ";
    }
    cout << endl << "Array unidad después de Insertion Sort: ";
    for (const auto& num : array_unidad) {
        cout << num << " ";
    }
    cout << endl << endl;

    //merge sort
    sort.random_vector(arr);
    cout << "Array antes de Merge Sort: ";
    for (const auto& num : arr) {
        cout << num << " ";
    }
    cout << endl;
    sort.mergeSort(arr, 0, arr.size() - 1);
    cout << "Array después de Merge Sort: ";
    for (const auto& num : arr) {
        cout << num << " ";
    }
    sort.mergeSort(array_ordenado, 0, array_ordenado.size() - 1);
    sort.mergeSort(array_unidad, 0, array_unidad.size() - 1);
    cout << endl << "Array ordenado de 1 a 15 después de Merge Sort: ";
    for (const auto& num : array_ordenado) {
        cout << num << " ";
    }
    cout << endl << "Array unidad después de Merge Sort: ";
    for (const auto& num : array_unidad) {
        cout << num << " ";
    }
    cout << endl << endl;

    //quick sort
    sort.random_vector(arr);
    cout << "Array antes de Quick Sort: ";
    for (const auto& num : arr) {
        cout << num << " ";
    }
    cout << endl;
    sort.quickSort(arr, 0, arr.size() - 1);
    cout << "Array después de Quick Sort: ";
    for (const auto& num : arr) {
        cout << num << " ";
    }
    sort.quickSort(array_ordenado, 0, array_ordenado.size() - 1);
    sort.quickSort(array_unidad, 0, array_unidad.size() - 1);
    cout << endl << "Array ordenado de 1 a 15 después de Quick Sort: ";
    for (const auto& num : array_ordenado) {
        cout << num << " ";
    }
    cout << endl << "Array unidad después de Quick Sort: ";
    for (const auto& num : array_unidad) {
        cout << num << " ";
    }
    cout << endl << endl;

    return 0;
}