#include <iostream>
#include <cstdint>
#include <cmath>

using namespace std;

int factorial(int n)
{
    int result = 1;
    for (n; n > 1; n--)
    {
        result *= n;
    }
    return result;
}

int binary_coefficient(int n, int r)
{
    return factorial(n) / (factorial(r) * factorial(n - r));
}

void pascals_triangle(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            int result = binary_coefficient(i, j);
            cout << result << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    pascals_triangle(n);
    return 0;
}