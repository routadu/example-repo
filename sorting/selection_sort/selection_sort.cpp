#include <iostream>

using namespace std;

void selection_sort(int arr[], int l){
    for (int i = 0; i < l-1; i++){
        for (int j = i+1; j < l; j++){
            if (arr[j] < arr[i]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}

int main () {

    int arr[10] = {2324,2132,11,32,23,311,199,911,2,1};
    selection_sort(arr,sizeof(arr)/sizeof(INT_MAX));

    cout << "\n\nSorted Array\n\n";
    
    for (int i = 0; i < 10; i++){
        cout << arr[i] << ", ";
    }

    return 0;

}