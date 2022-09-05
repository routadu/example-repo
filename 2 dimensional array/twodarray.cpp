#include <iostream>

using namespace std;

int createMatrix()
{
    return 0;
}

int main()
{

    int n, m;
    cout << "Enter the number of rows and columns: ";
    cin >> m >> n;
    int arr[n][m];
    cout << "\n\nEnter your matrix\n\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "\n\nMatrix is \n\n";

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";
}