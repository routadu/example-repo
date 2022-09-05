#include <iostream>
#include <cstdint>

using namespace std;

void binary_search(int arr[], int a, int b, int input)
{

    if (a < b)
    {
        int mid = (a + b) / 2;

        if (arr[mid] == input)
        {
            cout << "\nIndex position of " << input << " is " << mid;
            return;
        }

        if (arr[mid] > input)
        {
            binary_search(arr, a, --mid, input);
        }
        if (arr[mid] < input)
        {
            binary_search(arr, ++mid, b, input);
        }
    }
    else
    {
        cout << "\nElement not found !!!";
        return;
    }
}

int main()
{

    int arr[6];
    int n;

    for (int i = 0; i < 6; i++)
    {
        cin >> n;
        arr[i] = n;
    }

    int input;
    cin >> input;

    binary_search(arr, 0, 5, input);

    return 0;
}