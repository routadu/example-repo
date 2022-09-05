#include <iostream>
using namespace std;

void inputArray(int *arr, int len)
{
    int temp;
    cout << "\nEnter the elements of the array\n\n";
    for (int i = 0; i < len; i++)
    {
        cout << i + 1 << ": ";
        cin >> temp;
        *(arr + i) = temp;
    }
    cout << "\n\n";
}

void printArray(int *arr, int len)
{
    cout << "\n\n[ ";
    for (int i = 0; i < len; i++)
    {
        cout << *(arr + i) << ", ";
    }
    cout << "]\n\n";
}

void reverseArray(int *arr, int len)
{
    int temp;
    for (int i = 0; i < len / 2; i++)
    {
        temp = *(arr + i);
        *(arr + i) = *(arr + len - 1 - i);
        *(arr + len - 1 - i) = temp;
    }
    // int *revArr = new int[len];
    // for (int i = 0; i < len; i++)
    // {
    //     *(revArr + i) = *(arr + len - 1 - i);
    // }
    // return revArr;
}

int linearSearch(int *arr, int element, int startIndex, int endIndex)
{
    for (int i = startIndex; i < endIndex; i++)
    {
        if (*(arr + i) == element)
            return i;
    }
    return -1;
}

int binarySearch(int *arr, int element, int startIndex, int endIndex)
{
    if (startIndex <= endIndex)
    {
        int mid = (startIndex + endIndex) / 2;
        if (arr[mid] == element)
            return mid;
        if (arr[mid] > element)
            binarySearch(arr, element, startIndex, --mid);
        if (arr[mid] < element)
            binarySearch(arr, element, ++mid, endIndex);
    }
    else
        return -1;
}

void bubbleSort(int *arr, int len)
{
    int temp;
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len - 1 - i; j++)
        {
            if (*(arr + j) > *(arr + j + 1))
            {
                temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

void selectionSort(int *arr, int len)
{
    int temp, minIndex = 0;
    for (int i = 0; i < len; i++)
    {
        minIndex = i;
        for (int j = i + 1; j < len; j++)
        {
            if (*(arr + j) < *(arr + minIndex))
                minIndex = j;
        }
        temp = *(arr + i);
        *(arr + i) = *(arr + minIndex);
        *(arr + minIndex) = temp;
    }
}