#include <iostream>
using namespace std;

class base1
{
public:
    void greet()
    {
        cout << "good morning" << endl;
    }
};
class base2
{
public:
    void greet()
    {
        cout << "good night" << endl;
    }
};

class derived : public base1, public base2
{
    int a;

public:
    void greet()
    {
        base1::greet();
    }
};

int main()
{
    base1 obj1;
    base2 obj2;
    obj1.greet();
    obj2.greet();

    derived A;
    A.greet();
}
