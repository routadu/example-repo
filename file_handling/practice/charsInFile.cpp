#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int noOfChars = 0, noOfLines = 0, noOfSpaces = 0, noOfSmallLetters = 0, noOfCapitalLetters = 0;
    char chr;
    fstream fileHandler;
    const char *directory = "D:/Programming/C++ Programs/file_handling/files_directory/student.txt";
    fileHandler.open(directory, ios::in);
    while (!fileHandler.eof())
    {
        chr = fileHandler.get();
        if (chr == ' ')
            noOfSpaces++;

        else if (chr == '\n')
            noOfLines++;

        else
        {
            if ((int)chr >= 65 && (int)chr <= 90)
                noOfCapitalLetters++;
            if ((int)chr >= 97 && (int)chr <= 122)
                noOfSmallLetters++;
            noOfChars++;
        }
    }

    cout << "\n\n"
         << "File details: "
         << "\n\n";
    cout << "No of characters: " << noOfChars << endl;
    cout << "No of capital letters: " << noOfCapitalLetters << endl;
    cout << "No of small letters: " << noOfSmallLetters << "\n\n";
    cout << "No of spaces: " << noOfSpaces << endl;
    cout << "No of lines: " << noOfLines << endl;

    return 0;
}