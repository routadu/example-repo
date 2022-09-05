#include <iostream>

using namespace std;

int getBit(int n, int pos)
{
    return (n & (1 << pos)) != 0;
}

int setBit(int n, int pos)
{
    return (n | (1 << pos));
}

int clearBit(int n, int pos)
{
    return (n & ~(1 << pos));
}

int updateBit(int n, int pos, int val)
{
    int mask = ~(1 << pos);
    n &= mask;
    n |= (val << pos);
    return n;
}

bool isPowerOf2(int n)
{
    return (n && !(n & n - 1));
}

int numberOfOnesInBinaryRepresentation(int n)
{
    int count = 0;

    while (n)
    {
        n &= n - 1;
        count++;
    }
    return count;
}

int main()
{
    // cout << "Get Bit 5: " << getBit(5, 2) << endl;

    // cout << "Set Bit 5: " << setBit(5, 1) << endl;

    // cout << "Clear Bit 5: " << clearBit(5, 2) << endl;

    // cout << "Update Bit 5: " << updateBit(5, 1, 1) << endl;

    // cout << isPowerOf2(266) << endl;

    cout << numberOfOnesInBinaryRepresentation(329) << endl;

    return 0;
}