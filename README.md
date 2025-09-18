[![ITESM](https://img.shields.io/badge/Instituci%C3%B3n-ITESM-blue)](https://tec.mx)
[![Curso](https://img.shields.io/badge/Curso-EDyAF%20(Gpo%20604)-0b6efd)]()
[![Actividad](https://img.shields.io/badge/Actividad-3--Algoritmos%20de%20ordenamiento-green)]()

# ▶️ Video en Youtube:
****

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


```
## Salida esperada (ejemplo) Considerar que los array son generados de forma aleatoria
```
Array antes de Bubble Sort: 12 16 43 2 16 18 21 12 19 39 34 8 37 23 10 
Array después de Bubble Sort: 2 8 10 12 12 16 16 18 19 21 23 34 37 39 43

Array antes de Selection Sort: 4 46 7 7 14 19 47 12 19 43 17 36 18 15 24
Array después de Selection Sort: 4 7 7 12 14 15 17 18 19 19 24 36 43 46 47

Array antes de Insertion Sort: 43 7 30 48 39 2 20 15 35 20 24 27 38 35 26
Array después de Insertion Sort: 2 7 15 20 20 24 26 27 30 35 35 38 39 43 48

Array antes de Merge Sort: 23 17 23 8 37 9 32 41 45 40 18 36 33 11 32
Array después de Merge Sort: 8 9 11 17 18 23 23 32 32 33 36 37 40 41 45

Array antes de Quick Sort: 23 14 9 14 33 37 34 25 7 24 26 26 48 33 37
Array después de Quick Sort: 7 9 14 14 23 24 25 26 26 33 33 34 37 37 48

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