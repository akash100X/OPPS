#include <iostream>
using namespace std;

class complex;

class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int realcomplex(complex, complex);
    int sumcomplex(complex, complex);
};

class complex
{
    int a;
    int b;
    friend int calculator::realcomplex(complex, complex);
    friend int calculator::sumcomplex(complex, complex);
    // we  will make entire class in frind
    //  friend class calculator;
public:
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }

    void display(void)
    {
        cout << "complex number is :" << a << "+" << b << "i";
    }
};

int calculator ::realcomplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}

int calculator ::sumcomplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    complex a1, a2;
    a1.setdata(1, 2);
    a2.setdata(3, 5);

    calculator sum;
    int resc = sum.realcomplex(a1, a2);
    cout << "sum of real complex is :" << resc << endl;

    int rescl = sum.sumcomplex(a1, a2);
    cout << "sum of complex number is :" << rescl << endl;
    return 0;
}