#include <iostream> 
#include <cstdint>

using namespace std;

void populate_array(int arr[],int l){
    int input;
    for (int i = 0; i < l; i++){
        cin >> input;
        arr[i] = input;
    }
}

void bubble_sort(int arr[], int l){

    for (int i = 0; i < l;i++){
        for (int j = 0; j < l-i; j++){
            if (arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

}

int main () {

    int arr[10];

    populate_array(arr,10);
    bubble_sort(arr,10);

    cout << "\n\nSorted Array: \n\n";

    for ( int i = 0; i < 10; i++){
        cout << arr[i] << ", ";
    }

    return 0;

}