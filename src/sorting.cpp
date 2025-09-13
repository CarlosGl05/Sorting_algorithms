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