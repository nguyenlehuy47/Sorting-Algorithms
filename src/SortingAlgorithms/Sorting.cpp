#include "Sorting.h"

// Selection Sort
void selectionSort(int arr[], int n, long long &compCount) {
    for (int i = 0; i < n - 1; i++) {
        int minIdx = i;
        for (int j = i + 1; j < n; j++) {
            compCount++;
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        std::swap(arr[i], arr[minIdx]);
    }
}

// Insertion Sort
void insertionSort(int arr[], int n, long long &compCount) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            compCount++;
            arr[j + 1] = arr[j];
            j--;
        }
        compCount++;
        arr[j + 1] = key;
    }
}
