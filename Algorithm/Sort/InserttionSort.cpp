#include <iostream>
using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void insertionsort(int arr[], int n){
    for (int i = 1; i < n; i++){
        int value = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > value){
            arr[j+1] = arr[j];
            j = j - 1;
        }
        arr[j + 1 ] = value;
    }
}

int main(){
    int arr[] = {2,5,2,9,7,5,2,4,2};
    insertionsort(arr, 9);
    for( int i =0; i < 9; i++){
        cout << arr[i] << " ";
    }
    return 0;
}