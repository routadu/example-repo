#include <iostream>

using namespace std;

class Base
{
    void method1()
    {
        cout << "Method 1" << endl;
    }
    void method2()
    {
        cout << "Method 2" << endl;
    }

protected:
    void method3()
    {
        cout << "Method 3" << endl;
    }
    void method4()
    {
        cout << "Method 4" << endl;
    }

public:
    void method5()
    {
        cout << "Method 5" << endl;
    }
    void method6()
    {
        cout << "Method 6" << endl;
    }
};

class Derived : public Base
{
};

int main()
{
    Derived d1;
    d1.method5();
    d1.method6();
    return 0;
}