[![ITESM](https://img.shields.io/badge/Instituci%C3%B3n-ITESM-blue)](https://tec.mx)
[![Curso](https://img.shields.io/badge/Curso-EDyAF%20(Gpo%20604)-0b6efd)]()
[![Actividad](https://img.shields.io/badge/Actividad-3--Algoritmos%20de%20ordenamiento-green)]()

# ▶️ Video en Youtube:
**(https://youtu.be/h693m8yZdRk?si=M-WLwHCjIJ-H4zEm)**

# 🧩 Actividad 3 Algoritmos de ordenamiento

**Programación de estructuras de datos y algoritmos fundamentales (Gpo 604)**  
**Instituto Tecnológico y de Estudios Superiores de Monterrey**

---

## 👥 Integrantes del equipo

| Nombre                        | Matrícula |
| ----------------------------- | --------- |
| Ángel Landín López            | A00574700 |
| Ángeles Araiza García         | A00574806 |
| Carlos Andrés Gloria Cortes   | A00574714 |
| Mónica Isabel Torres García   | A00573457 |

---

## 🏷 Nombre de la actividad
**Actividad: Algoritmos de ordenamiento**

---

## 📂 Estructura del proyecto

```
.
├─ sorting.h        // Declaración: algoritmos de sorting, funciones auxiliares, constructor y destructor default
├─ sorting.cpp      // Implementación:métodos
├─ main.cpp            // Casos de prueba y demostración
└─ README_SORTING_ALGORITHMS.md// Documentación (este archivo)
```

---

## 📖 Resumen de la implementación
La clase `Sorting` implementa una serie de algoritmos de ordenamiento así como sus funciones auxiliares y métodos de apoyo para el testing.

Permite ordenar un array sin tener que realizar una copia innecesaria en memoria y sobre todo manejando diferentes opciones de algoritmo dependiendo cuál sea el mas óptimo.

---


---


---

## 📝 Algoritmos implementados
La clase `sorting` implementa los siguientes algoritmos clásicos de ordenamiento:

| Algoritmo | Complejidad mejor caso | Promedio | Peor caso |
|-----------|-------------------------|----------|-----------|
| **Bubble Sort** | O(n) | O(n²) | O(n²) |
| **Selection Sort** | O(n²) | O(n²) | O(n²) |
| **Insertion Sort** | O(n) | O(n²) | O(n²) |
| **Merge Sort** | O(n log n) | O(n log n) | O(n log n) |
| **Quick Sort** | O(n log n) | O(n log n) | O(n²) |

Además, se incluye la función `random_vector` para generar automáticamente vectores aleatorios de prueba.

---

## 📊 Ejemplo de uso

```cpp
#include "sorting.h"
#include <iostream>
#include <vector>
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

```
## Salida esperada (ejemplo) Considerar que los array son generados de forma aleatoria
```
Array antes de Bubble Sort: 40 41 50 36 14 2 42 17 11 41 17 23 8 11 36 
Array después de Bubble Sort: 2 8 11 11 14 17 17 23 36 36 40 41 41 42 50
Array ordenado de 1 a 15 después de Bubble Sort: 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15
Array unidad después de Bubble Sort: 1

Array antes de Selection Sort: 25 5 35 35 33 42 26 3 5 40 38 32 12 10 31
Array después de Selection Sort: 3 5 5 10 12 25 26 31 32 33 35 35 38 40 42
Array ordenado de 1 a 15 después de Selection Sort: 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15
Array unidad después de Selection Sort: 1

Array antes de Insertion Sort: 35 30 24 40 8 22 33 32 6 26 43 18 2 14 27
Array después de Insertion Sort: 2 6 8 14 18 22 24 26 27 30 32 33 35 40 43
Array ordenado de 1 a 15 después de Insertion Sort: 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15
Array unidad después de Insertion Sort: 1

Array antes de Merge Sort: 12 23 46 46 14 3 30 2 22 19 44 8 44 45 19
Array después de Merge Sort: 2 3 8 12 14 19 19 22 23 30 44 44 45 46 46
Array ordenado de 1 a 15 después de Merge Sort: 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15
Array unidad después de Merge Sort: 1

Array antes de Quick Sort: 10 2 33 43 22 11 24 19 48 35 8 37 25 20 20
Array después de Quick Sort: 2 8 10 11 19 20 20 22 24 25 33 35 37 43 48
Array ordenado de 1 a 15 después de Quick Sort: 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 
Array unidad después de Quick Sort: 1

```
## ⭐Mejores casos de implementación:
```
Cada algoritmo tiene un escenario ideal donde funciona mejor:

Bubble Sort → Cuando el arreglo ya está casi ordenado (solo algunos intercambios).

Selection Sort → No tiene un mejor caso claro, siempre recorre todo el arreglo (O(n²) en cualquier caso).

Insertion Sort → Excelente con arreglos pequeños o casi ordenados.

Merge Sort → Ideal para arreglos grandes y cuando se requiere estabilidad en el ordenamiento.

Quick Sort → Muy eficiente en arreglos grandes y aleatorios, con buen pivoteo logra O(n log n)
```

## 🧾 Compilación y ejecución

En sistemas Unix (Linux / macOS) con g++:

```bash
g++ -std=c++17 -Wall -Wextra LinkedList.cpp main.cpp -o linkedlist_test
./linkedlist_test
```

En Windows con MinGW el mismo comando usando `g++` en la terminal.

---
