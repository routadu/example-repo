#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int noOfChars = 0, noOfLines = 0;
    char currChar;
    fstream fileHandler;
    fileHandler.open("D:/Programming/C++ Programs/file_handling/files_directory/student.txt", ios::in);
    while (!fileHandler.eof())
    {
        currChar = fileHandler.get();
        if (currChar == '\n')
            noOfLines++;
        else
            noOfChars++;
    }
    fileHandler.close();
    cout << "Number of characters: " << noOfChars << endl;
    cout << "Number of lines: " << noOfLines << endl;
    return 0;
}