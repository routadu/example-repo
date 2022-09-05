#include <iostream>
#include <cmath>
using namespace std;

unsigned long long int binaryToDecimal(unsigned long long int num)
{
    int dec = 0, exp = 0;
    while (num > 0)
    {
        dec += (num % 2) * pow(2, exp);
        num /= 10, exp++;
    }
    return dec;
}

int main()
{
    int n;
    unsigned long long int e;
    cout << "Enter no of times you want to run the program: ";
    cin >> n;
    while (n--)
    {
        cout << "\nEnter a binary number: ";
        cin >> e;
        cout << binaryToDecimal(e) << "\n";
    }
    return 0;
}