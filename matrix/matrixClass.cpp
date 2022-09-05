#include <iostream>
#include <cmath>
using namespace std;

class Matrix
{
private:
    int rows, columns, *mat;

public:
    Matrix(int _rows, int _columns)
    {
        rows = _rows, columns = _columns;
        mat = new int[_rows * _columns];
    }
    ~Matrix()
    {
        delete[] mat;
    }
    void inputMatrix()
    {
        int temp;
        cout << "\n\nEnter elements of the matrix\n\n";
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                cout << i + 1 << "," << j + 1 << ": ";
                cin >> temp;
                *(mat + (i * rows) + j) = temp;
            }
        }
    }
    void printMatrix()
    {
        cout << "\n\nMatrix\n\n";
        for (int i = 0; i < rows; i++)
        {
            cout << "[ ";
            for (int j = 0; j < columns; j++)
            {

                cout << *(mat + (i * rows) + j) << " ";
            }
            cout << "]\n";
        }
    }
    void addMatrix(Matrix &matB)
    {
        int temp;
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                temp = *(mat + (i * rows) + j) + *(matB.mat + (i * rows) + j);
                *(mat + (i * rows) + j) = temp;
            }
        }
    }
    void subtractMatrix(Matrix &matB)
    {
        int temp;
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                temp = *(mat + (i * rows) + j) - *(matB.mat + (i * rows) + j);
                *(mat + (i * rows) + j) = temp;
            }
        }
    }
    void multiplyMatrix(Matrix &matB)
    {
        int temp = 0, *tempArr = new int[rows * columns];
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                temp = 0;
                for (int k = 0; k < rows; k++)
                {
                    temp += (*(mat + (i * rows) + k)) * (*(matB.mat + (k * rows) + j));
                }
                *(tempArr + (i * rows) + j) = temp;
            }
        }
        delete[] mat;
        mat = tempArr;
    }
    void transpose()
    {
        int *tempArr = new int[rows * columns];
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {

                *(tempArr + (i * rows) + j) = *(mat + (j * rows) + i);
            }
        }
        delete[] mat;
        mat = tempArr;
    }
};

int main()
{
    Matrix a = Matrix(3, 3);
    Matrix b = Matrix(3, 3);
    a.inputMatrix();
    b.inputMatrix();
    a.multiplyMatrix(b);
    a.printMatrix();
    a.transpose();
    a.printMatrix();
    return 0;
}
