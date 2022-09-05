#include <iostream>

using namespace std;

class Pattern1
{
public:
    static void printPattern(int n)
    {
        int noOfStars = 1;
        bool reverse = false;
        for (int iRow = 0; iRow < 2 * n; iRow++)
        {
            int totalSpace = n - noOfStars;
            for (int lStar = 0; lStar < noOfStars; lStar++)
            {
                cout << "*";
            }
            for (int mSpace = 0; mSpace < totalSpace; mSpace++)
            {
                cout << "  ";
            }
            for (int rStar = 0; rStar < noOfStars; rStar++)
            {
                cout << "*";
            }
            cout << "\n";
            if (noOfStars == n and not reverse)
            {
                reverse = true;
                continue;
            }
            if (not reverse)
                noOfStars++;
            else
                noOfStars--;
        }
    }

    static void printExample()
    {
        const char *output = "\n\n \
*      *\n \
**    **\n \
***  ***\n \
********\n \
********\n \
***  ***\n \
**    **\n \
*      *\n \
\n\n";

        cout << output;
    }
};

int main()
{
    Pattern1::printExample();
    return 0;
}