#include <iostream>
#include <chrono>
#include "SortingAlgorithms/Sorting.h"
#include "DataGenorator.h"

using namespace std;
using namespace std::chrono;

int main(int argc, char *argv[]) {
    if (argc < 3) {
        cerr << "Usage: " << argv[0] << " <size> <dataType>\n";
        return 1;
    }

    int size = stoi(argv[1]);  // Kích thước mảng từ tham số dòng lệnh
    int dataType = stoi(argv[2]);  // Loại dữ liệu cần phát sinh

    int *arr = new int[size];
    GenerateData(arr, size, dataType);

    cout << "Chọn thuật toán sắp xếp:\n1. Selection Sort\n2. Insertion Sort\n";
    int choice;
    cin >> choice;

    long long compCount = 0;
    auto start = high_resolution_clock::now();

    switch (choice) {
        case 1:
            selectionSort(arr, size, compCount);
            break;
        case 2:
            insertionSort(arr, size, compCount);
            break;
        default:
            cerr << "Lựa chọn không hợp lệ!\n";
            delete[] arr;
            return 1;
    }

    auto end = high_resolution_clock::now();
    duration<double> elapsed = end - start;

    cout << "Thời gian chạy: " << elapsed.count() << " giây\n";
    cout << "Số phép so sánh: " << compCount << endl;

    delete[] arr;
    return 0;
}