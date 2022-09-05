#include <iostream>
#include <cstdint>
#include <cmath>
using namespace std;

int main()
{
    int number;
    bool prime = true;
    cout << "Enter a number: ";
    cin >> number;

    for (int i = 2; i <= sqrt(number); i++)
    {
        if (number % i == 0)
        {
            prime = false;
            break;
        }
    }
    cout << number;
    prime ? cout << " is a prime Number" : cout << " is not a prime number";
}