#include <iostream>

using namespace std;

int main()
{
    int arr[4] = {224, 34, 384, 88}, *ptr, (*arrPtr)[4];
    ptr = arr;
    arrPtr = &arr;

    cout << "Normal Pointer" << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << ptr + i << endl;
    }
    cout << endl;
    cout << "Array[4] Pointer" << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << arrPtr + i << endl;
    }
    cout << endl;
    cout << "Array Pointer ( Dereferenced )" << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << *(arrPtr) + i << endl;
    }
    return 0;
}