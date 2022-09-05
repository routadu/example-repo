#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int first, last, digits;
    unsigned long long int num, revNum;
    cout << "Enter any number: ";
    cin >> num;
    digits = (int)log10(num);
    first = num / pow(10, digits);
    last = num % 10;
    revNum = last * pow(10, digits);
    revNum += num % (int)pow(10, digits);
    revNum = revNum - last + first;
    cout << "\nNumber after swapping first and last digits\n"
         << revNum << "\n\n";
    return 0;
}