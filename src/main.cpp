#include "sorting.h"
#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

int main() {
    vector<int> arr;
    sorting sort;
    sort.random_vector(arr);

    //bubble sort
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
    cout << endl << endl;

    return 0;
}