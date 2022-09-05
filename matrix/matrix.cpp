#include <iostream>

using namespace std;

void matrixInput(int *arr, int row, int column)
{
    int temp;
    cout << "\n\nEnter the values of the matrix\n\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << i + 1 << "," << j + 1 << ": ";
            cin >> temp;
            *(arr + (i * row) + j) = temp;
        }
    }
}

void matrixOutput(int *arr, int row, int column)
{
    cout << "\n\nMatrix: \n\n";
    for (int i = 0; i < row; i++)
    {
        cout << "[ ";
        for (int j = 0; j < column; j++)
        {
            cout << *(arr + (i * row) + j) << " ";
        }
        cout << "]" << endl;
    }
    cout << "\n\n";
}

int main()
{
    int row, column, *arr;
    cin >> row >> column;
    arr = new int[row * column];
    matrixInput(arr, row, column);
    matrixOutput(arr, row, column);
    delete[] arr;
    return 0;
}