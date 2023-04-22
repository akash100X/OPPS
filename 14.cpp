#include <iostream>
using namespace std;

class complex
{
    int a;
    int b;

public:
    complex(int x, int y)
    {
        a = x;
        b = y;
    }

    complex(int x)
    {
        a = x;
        b = 0;
    }

    complex()
    {
        a = 0;
        b = 12;
    }

    void setdata()
    {
        cout << "complex number is : " << a << "+" << b << "i" << endl;
    }
};

int main()
{
    complex c1(1, 2);

    c1.setdata();

    complex c2(3);
    c2.setdata();

    complex c3;
    c3.setdata();

    return 0;
}