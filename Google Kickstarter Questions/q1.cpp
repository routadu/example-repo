#include <iostream>

using namespace std;

int main () {

    const int arrLength = 20;
    int arr[arrLength] = {1,2,3,4,5,6,7,8,12,13,14,15,16,17,18,19,20,21,22};
    int i = 2;
    int longestSubArrayLength = 2;
    int currentSubArrayLength = 2;
    int commonDifference = arr[1] - arr[0];

    while (i < arrLength){
        if (arr[i] - arr[i-1] == commonDifference){
            currentSubArrayLength++;
        }
        else{
            commonDifference = arr[i] - arr[i-1];
            currentSubArrayLength = 2;
        }
        longestSubArrayLength = __max(currentSubArrayLength,longestSubArrayLength);
        i++;
    }

    cout << "Longest SubArray Length: " << longestSubArrayLength;

}