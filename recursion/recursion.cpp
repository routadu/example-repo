#include <iostream>

using namespace std;

int recursiveSumTillN(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return (n + recursiveSumTillN(n - 1));
}

int recursiveMRaisedToPowerN(int m, int n)
{
    if (n == 0)
    {
        return 1;
    }
    return (m * recursiveMRaisedToPowerN(m, n - 1));
}

int recursiveFactorial(int m)
{
    if (m == 1)
    {
        return 1;
    }
    return (m * recursiveFactorial(m - 1));
}

int recursiveNthFibonacciNumber(int m)
{
    if (m == 0 || m == 1)
    {
        return m;
    }
    return (recursiveNthFibonacciNumber(m - 1) + recursiveNthFibonacciNumber(m - 2));
}

int main()
{
    cout << recursiveNthFibonacciNumber(10) << endl;
}