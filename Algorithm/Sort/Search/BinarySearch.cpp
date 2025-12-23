#include <iostream>
using namespace std;

int binarysearch(int arr[], int length, int item){
    int first = 0;
    int last = length - 1;
    int mid;
    bool found = false;
    while (first < last && !found){
        mid = (first + last ) / 2;
        if (arr[mid] == item)
            found = true;
        else if (arr[mid] > item)
            last = mid -1;
        else 
            first = mid + 1; 
}
    if (found)
        return mid;
    else
        return -1;
}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int length = sizeof(arr) / sizeof(arr[0]);
    int item = 9;
    int result = binarysearch(arr, length, item);
    if (result != -1){
        cout << "Vi tri cua phan tu la: " << result << endl;
    }
    else{
        cout << "Khong tim thay phan tu" << endl;
    }
    return 0;
}