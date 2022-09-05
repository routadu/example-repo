#include <iostream>

using namespace std;

void update(int *arr, int len)
{
    for (int i = 0; i < len; i++)
    {
        arr[i] = arr[i] * arr[i];
    }
}

void printArr(int arr[], int len)
{
    cout << "[ ";
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "]\n";
}

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printArr(arr, 10);
    update(arr, 10);
    printArr(arr, 10);
    return 0;
}