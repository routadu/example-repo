#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    // // Simple declaration of string
    // string str1;

    // // Declaring a string with a value repeated n times
    // string str2("hello");
    // cout << str2 << endl;

    // string str3 = "str3";

    // string str4;
    // getline(cin, str4);
    // cout << str4 << endl;

    // string ss1 = "Hello I'm Aditya, a software engineer";
    // string numS = "1234567890";
    // int numN = stoi(numS);
    // cout << "Output of stoi function: " << numN << endl;
    // cout << "Substring from index 6: " << ss1.substr(6, 5);

    // int xyz = 20000;
    // xyz += 2434;
    // cout << to_string(xyz) + "2345" << endl;

    string s1 = "fpoowdxnctewfweffwf";
    sort(s1.begin(), s1.end());
    cout << s1 << endl;

    return 0;
}