#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    int setdata(int x, int y)
    {
        a = x;
        b = y;
    }
    friend complex sumcomplex(complex o1, complex o2);
    int display(void)
    {
        cout << "complex number is : " << a << "+" << b << "i" << endl;
    }
};
complex sumcomplex(complex o1, complex o2)
{
    complex o3;
    o3.setdata((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    complex c1, c2, sum;
    c1.setdata(2, 3);
    c1.display();

    c2.setdata(4, 5);
    c2.display();

    sum = sumcomplex(c1, c2);
    sum.display();
    return 0;
}