#include "sorting.h"
#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

int main() {
    //declaración del constructor de la clase sorting
    sorting sort;


//bubbleSort
    cout << "Ejemplo con bubble sort: " << endl;
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    cout << "array no ordenado: ";
    for (const auto& elem : arr) {
        cout << elem << " ";
    }

    cout << endl;

    sort.bubbleSort(arr);

    cout << "array ordenado: ";
    for (const auto& elem : arr) {
        cout << elem << " ";
    }
    cout << endl;
    cout << endl;


//selectionSort
    cout << "Ejemplo con selection sort: " << endl;
    vector<int> arrs = {12,35,75,33,765,32,1,98};
    cout << "array no ordenado: ";
    for (const auto& elem : arrs) {
        cout << elem << " ";
    }

    cout << endl;

    sort.selectionSort(arrs);

    cout << "array ordenado: ";
    for (const auto& elem : arrs) {
        cout << elem << " ";
    }
    cout << endl;
    cout << endl;

    return 0;
}
