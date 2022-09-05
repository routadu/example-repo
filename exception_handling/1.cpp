#include <iostream>

using namespace std;

class Exm
{
public:
    int a, b;
    void set(int a, int b)
    {
        this->a = a, this->b = b;
    }
};

void print(Exm *e)
{
    if (e)
        throw "Does not point to an object";
    else
        cout << e->a << " " << e->b << endl;
}

int main()
{
    try
    {
        Exm *exmm = new Exm;
        exmm->set(43, 444);
        delete (exmm);
        print(exmm);
    }
    catch (...)
    {

        cout << "Marr gya" << endl;
    }
    return 0;
}