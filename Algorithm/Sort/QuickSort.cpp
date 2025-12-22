#include <iostream>
using namespace std;

int choosePivot(int left, int right){
    return left + (right - left) / 2;
}
int partition(int arr[], int left, int right){
    int pivotind = choosePivot(left, right);
    swap(arr[right], arr[pivotind]);
    int pivot = arr[right];
    int i = left -1;

    for ( int j = left; j < right; j++){
        if(arr[j]<= pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[right]);
    return i+1;
}

void quicksort(int arr[], int left, int right){
    if (left < right){
        int pi = partition(arr, left, right);
        quicksort(arr, left, pi - 1);
        quicksort(arr, pi + 1, right);
    }
}


int main(){
    int arr[]= {4,2,8,2,5,2,3};
    quicksort(arr,0,6);
    for(int i =0; i<7; i++){
        cout << arr[i]<<" ";
    }
}