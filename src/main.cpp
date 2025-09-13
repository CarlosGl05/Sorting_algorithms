#include "sorting.h"
#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

int main() {
    sorting sorter;


    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    cout << "array no ordenado: ";
    for (const auto& elem : arr) {
        cout << elem << " ";
    }

    cout << endl;

    sorter.bubbleSort(arr);

    cout << "array ordenado: ";
    for (const auto& elem : arr) {
        cout << elem << " ";
    }
    cout << endl;

    return 0;
}
