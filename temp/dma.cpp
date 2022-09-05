#include <iostream>

using namespace std;

void setArr(int *arr, int len)
{
    for (int i = 0; i < len;)
    {
        *(arr + i++) = i;
    }
}

void printArr(int *arr, int len)
{
    cout << "[ ";
    for (int i = 0; i < len;)
    {
        cout << *(arr + i++) << ", ";
    }
    cout << "]\n";
}

int main()
{
    const int len = 10;
    int *arr = new int[10];
    setArr(arr, len);
    printArr(arr, len);
    delete[] arr;
    return 0;
}