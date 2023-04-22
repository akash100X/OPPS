#include <iostream>
using namespace std;

class Base1
{
    int a, b;

public:
    Base1(int a1, int b1)
    {
        a = a1;
        b = b1;
        cout<<"Base1 class constructor called "<<endl;
    }
    void display()
    {
        cout << "a=" << a << endl;
        cout << "b=" << b << endl;
    }
};
class Base2
{
    int c, d;

public:
    Base2(int c1, int d1)
    {
        c = c1;
        d = d1;
        cout<<"Base2 class constructor called "<<endl;
    }
    void display1()
    {
        cout << "c=" << c << endl;
        cout << "d=" << d << endl;
    }
};

class Derived : public Base1, public Base2
{
    int e, f;

public:
    Derived(int a1, int b1,int c1,int d1,int e1,int f1):Base2(c1,d1),Base1(a1,b1)
    {
        e = e1;
        f = f1;
        cout<<"Derived class constructor called "<<endl;
    }
    void display2()
    {   
        display();
        display1();
        cout << "e=" << e << endl;
        cout << "f=" << f << endl;
    }
};

int main(){
    Derived ak(2,5,4,3,6,7);
    // ak.display();
    // ak.display1();
    ak.display2();

 }