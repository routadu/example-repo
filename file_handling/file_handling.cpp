#include <iostream>
#include <cstring>
#include <fstream>

const char filesDirectory[] = "D:/Programming/C++ Programs/file_handling/files_directory";
const char binaryTxt[] = "D:/Programming/C++ Programs/file_handling/files_directory/binary.txt";
const char recordsTxt[] = "D:/Programming/C++ Programs/file_handling/files_directory/records.txt";

using namespace std;

void copyFile(string directory, string fileName, string extension)
{
    fstream readHandler;
    fstream writeHandler;
    directory.append("/");
    directory.append(fileName);
    string copyFilePath = directory;
    copyFilePath.append("_copy");
    copyFilePath.append(extension);
    directory.append(extension);
    readHandler.open(directory.c_str(), ios::in);
    writeHandler.open(copyFilePath.c_str(), ios::out);
    while (!readHandler.eof())
        writeHandler.put(readHandler.get());
    writeHandler.seekp(-1, ios::end);
    writeHandler.put(' ');
    readHandler.close(), writeHandler.close();
}

void binaryFileHandling()
{
    fstream fileHandler;
    fileHandler.open("D:/Programming/C++ Programs/file_handling/files_directory/binary.txt", ios::in | ios::out);
}

void randomHandling()
{
    // fstream fileHandler;

    // ofstream oFileHandler(recordsTxt);
    // oFileHandler << "Hello World, I'm Aditya Kirshna";
    // oFileHandler.close();
    string rString;
    ifstream iFileHandler(recordsTxt);
    getline(iFileHandler, rString);
    cout << rString;
    iFileHandler.close();
}

int main()
{
    copyFile(filesDirectory, "bit_manipulation", ".cpp");
    // randomHandling();
    return 0;
}