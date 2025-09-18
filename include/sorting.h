#ifndef sorting_H
#define sorting_H
#include <iostream>
#include <vector>

//clase base que define todos los métodos de ordenamiento y sus funciones auxiliares

class sorting{
    public:

        sorting() = default; // constructor por defecto
        ~sorting() = default; // destructor por defecto
        void bubbleSort(std::vector<int>& arr); 
        void selectionSort(std::vector<int>& arr);
        void insertionSort(std::vector<int>& arr);
        int partition_quick(std::vector<int>& arr,int left,int right); //funcion auxiliar para quicksort
        void quickSort(std::vector<int>& arr, int left, int right);
        void random_vector(std::vector<int>& arr);
        
};

#endif // sorting_Hs