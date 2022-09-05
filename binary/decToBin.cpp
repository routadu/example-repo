#include <iostream>
using namespace std;

void decToBin(int decNum)
{
    if (decNum > 0)
        decToBin(decNum / 2);
    if (decNum != 0)
        cout << decNum % 2;
}

int main()
{
    decToBin(2);
    return 0;
}