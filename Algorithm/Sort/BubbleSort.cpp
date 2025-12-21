#include <iostream>
using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubblesort(int arr[], int n){
    for (int i = 0; i < n -1 ; i++){
        for (int j = 0; j< n -i-1; j ++){
            if (arr[j] > arr[j + 1]){
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}
int main(){
    int arr[] = {3,6,0,5,2,6,2,5,5};
    bubblesort(arr, 9);
    for(int i =0; i<9; i++){
        cout << arr[i] << " ";
    }

    return 0;
}