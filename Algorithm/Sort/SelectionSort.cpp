#include <iostreaM>
using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionsort(int arr[], int n){
    for ( int i = 0; i < n-1; i++){
        int minIndex = i;
        for (int j = i+1; j < n; j++){
            if (arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        if (arr[minIndex] != arr[i]){
            swap(&arr[minIndex], &arr[i]);
        }
    }
}


int main(){
    int arr[] = {1,4,7,2,6,1,5,5,9};
    selectionsort(arr, 9);
    for (int i = 0; i < 9; i++){
        cout << arr[i] << " ";
    }
    return 0; 
}