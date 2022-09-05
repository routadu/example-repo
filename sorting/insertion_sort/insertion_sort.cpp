#include <iostream> 

using namespace std;

void insertion_sort(int arr[],int arrLength){

    for (int i = 1; i < arrLength; i++){
        int currentElement = arr[i];
        int j = i-1;
        
        while (arr[j] > currentElement && j>=0){
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = currentElement;
    }

}

int main () {

    int arr[10] = {232,1234,444,3,12,1,2,2323,78,9};
    int arrLength = sizeof(arr)/sizeof(INT_MAX);
    insertion_sort(arr,arrLength);

    cout << "\n\nSorted Array\n\n";

    for (int i = 0; i < arrLength; i++){
        cout << arr[i] << ", ";
    }

    return 0;

}