#include <iostream>

using namespace std;

unsigned long long int decimalToBinary(unsigned long long int num)
{
    unsigned long long int bin = 0;

    if (num > 0)
    {
        return num % 2 + decimalToBinary(num / 2) * 10;
    }
    else
        return 0;
}

int main()
{
    int n;
    unsigned long long int e;
    cout << "Enter no of times you want to run the program: ";
    cin >> n;

    while (n--)
    {
        cout << "\nEnter a decimal number: ";
        cin >> e;
        cout << decimalToBinary(e) << "\n";
    }
    return 0;
}