#include <iostream>
using namespace std;

class number
{
    int a;

public:
    number()
    {
        a = 0;
    }
    number(int k)
    {
        a = k;
    }
    // when no copy constructr is found, complier send its own copy constructer
    number(number &obj)
    {
        a = obj.a;
        cout << "copy constructer called !!" << endl;
    }

    void display(void)
    {
        cout << "The value of a is :" << a << endl;
    }
};

int main()
{
    number x, y(22), z, z3;
    x.display();
    y.display();
    z.display();

    number z1(y); // copy constructor invoked
    z1.display();

    number z2 = z; // copy constructor invoked
    z2.display();

    z3 = y; // copy constructor not called
    z3.display();

    return 0;
}