#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void swapInt(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (arr[minIndex] != arr[i]) {
            swapInt(&arr[minIndex], &arr[i]);
        }
    }
}

int main() {
    const int n = 10;
    int arr[n];

    cout << "Mang ban dau: ";
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 50; 
        cout << arr[i] << ' ';
    }
    cout << '\n';

    selectionSort(arr, n);
    cout << "Mang sau khi sap xep: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }
    cout << '\n';
    return 0;
}
