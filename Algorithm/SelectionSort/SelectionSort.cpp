#include <iostream>
#include <cstdlib>
#include <ctime>
#include <utility>

void selectionSort(int arr[], int n) {
    if (n < 2) return;
    for (int i = 0; i < n - 1; ++i) {
        int minIdx = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        if (minIdx != i) {
            std::swap(arr[i], arr[minIdx]);
        }
    }
}

static void printArray(const int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << (i + 1 == n ? '\n' : ' ');
    }
}

int main() {
    std::srand(static_cast<unsigned>(std::time(nullptr)));

    const int N = 10;
    int a[N];
    for (int i = 0; i < N; ++i) {
        a[i] = std::rand() % 100; // 0..99
    }

    std::cout << "Mang truoc khi sap xep: ";
    printArray(a, N);

    selectionSort(a, N);

    std::cout << "Mang sau khi sap xep:  ";
    printArray(a, N);

    return 0;
}
