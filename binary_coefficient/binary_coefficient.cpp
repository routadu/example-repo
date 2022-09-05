#include <iostream>
#include <cstdint>

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

int main()
{

    cout << "\n\nBinary Coefficient\n\n";
    int n, r;
    cout << "Enter n: ";
    cin >> n;
    cout << "\nEnter r: ";
    cin >> r;

    if (r > n)
    {
        cout << "\n\nr cannot be greater than n";
        return 0;
    }

    int result = factorial(n) / (factorial(r) * factorial(n - r));

    cout << "\nBinary coefficient of " << n << " C " << r << " is: " << result;

    return 0;
}