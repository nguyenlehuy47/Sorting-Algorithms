#include "utils.h"

void readArrayFromFile(const std::string &filename, int *&arr, int &n) {
    std::ifstream inFile(filename);
    if (!inFile) {
        std::cerr << "❌ Không thể mở file " << filename << "!\n";
        exit(1);
    }

    inFile >> n;
    arr = new int[n];
    for (int i = 0; i < n; i++) {
        inFile >> arr[i];
    }
    inFile.close();
}

void writeArrayToFile(const std::string &filename, int *arr, int n) {
    std::ofstream outFile(filename);
    if (!outFile) {
        std::cerr << "❌ Không thể tạo file " << filename << "!\n";
        exit(1);
    }

    outFile << n << "\n";
    for (int i = 0; i < n; i++) {
        outFile << arr[i] << " ";
    }
    outFile << "\n";
    outFile.close();
}
