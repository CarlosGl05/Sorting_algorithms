#ifndef sorting_H
#define sorting_H
#include <iostream>
#include <vector>


class sorting{
    public:

        sorting() = default;
        ~sorting() = default;
        void bubbleSort(std::vector<int>& arr);
        void selectionSort(std::vector<int>& arr);
        
};

#endif // sorting_Hs