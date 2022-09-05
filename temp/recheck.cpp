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
        if (*(arr + mid) == element)
            return mid;
        if (*(arr + mid) > element)
            return binarySearch(arr, element, startIndex, --mid);
        else
            return binarySearch(arr, element, ++mid, endIndex);
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

int main()
{
    int n, choice, element, res, *arr;
    cout << "Enter size of array: ";
    cin >> n;
    arr = new int[n];
    inputArray(arr, n);
    cout << "What would you like to perform ?\n1. Linear search\n2.Binary Search\n"
         << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    cout << "Enter element to search: ";
    cin >> element;
    switch (choice)
    {
    case 1:
        res = linearSearch(arr, element, 0, n - 1);
        if (res < 0)
        {
            cout << "Element not found" << endl;
        }
        else
        {
            cout << "Element found at index: " << res << endl;
        }
        break;
    case 2:
        bubbleSort(arr, n);
        res = binarySearch(arr, element, 0, n - 1);
        if (res < 0)
        {
            cout << "Element not found" << endl;
        }
        else
        {
            cout << "Array has been sorted to perform binary search" << endl;
            printArray(arr, n);
            cout << "Element found at index: " << res << endl;
        }
        break;
    default:
        cout << "Incorrect option entered" << endl;
    }
    delete[] arr;
}