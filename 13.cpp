#include <iostream>
using namespace std;

class complex
{
    int a;
    int b;

public:
    complex(){ } //for line no.28  when it is not declared then line no 28 throw a error
    complex(int x, int y)
    {
        a = x;
        b = y;
    }

    void setdata(void)
    {
        cout << "complex number is :" << a << "+" << b << "i" << endl;
    }
};

int main()
{
    complex A(5, 6);
    A.setdata();

    complex B;              
    B = complex(51, 54);        //or comblex B = complex(51,54);
    B.setdata();
    return 0;
}