#include <iostream>
using namespace std;

void shellsort(int arr[], int n){
    int interval, i , j , temp;
    for (interval = n/2; interval > 0; interval /=2 ){
        for( i = interval ; i < n; i++){
            temp = arr[i];
            for(j = i; j >= interval && arr[j - interval] > temp; j -= interval){
                arr[j] = arr[j - interval];
            
            }
            arr[j] =temp;
        }
    }
}

int main(){
    int arr[] = {4,2,6,7,1,8,5};
    shellsort(arr,7);
    for(int i = 0; i < 7; i++){
        cout << arr[i] << " ";
    }
    return 0;
}