#include <iostream>
#include <fstream>

using namespace std;

class Student
{
    string name;
    int age;
    string rollNo;

public:
    void getData()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter roll number: ";
        cin >> rollNo;
    }
    void printData()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll No: " << rollNo << endl;
    }
    void saveData(fstream &fileHandler)
    {
        fileHandler.open("D:/Programming/C++ Programs/file_handling/files_directory/student.txt", ios::app);
        string output;
        output.append("Name: ");
        output.append(name);
        output.append("\n");
        output.append("Age: ");
        output.append(to_string(age));
        output.append("\n");
        output.append("Roll No: ");
        output.append(rollNo);
        output.append("\n\n");
        fileHandler.write(output.c_str(), output.length());
    }
};

int main()
{
    fstream fileHandler;
    Student s1;
    s1.getData();
    s1.printData();
    s1.saveData(fileHandler);
    fileHandler.close();
    return 0;
}