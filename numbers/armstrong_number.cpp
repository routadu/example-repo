#include <iostream>
#include <cstdint>

using namespace std;

int main()
{

    int n;
    cin >> n;
    int n_copy = n;
    int armstrong = 0;

    while (n > 0)
    {
        int lastDigit = n % 10;
        armstrong = armstrong + lastDigit * lastDigit * lastDigit;
        n /= 10;
    }
    cout << n_copy;
    armstrong == n ? cout << " is an armstrong number" : cout << " is not an armstrong number";

    return 0;
}