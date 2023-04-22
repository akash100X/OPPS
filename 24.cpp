#include <iostream>
using namespace std;

class base1
{
protected:
    int a;

public:
    void set_a(int x)
    {
        a = x;
    }
};

class base2
{
protected:
    int b;

public:
    void set_b(int y)
    {
        b = y;
    }
};

class base3
{
protected:
    int c;

public:
    void set_c(int z)
    {
        c = z;
    }
};

class derived:public base1,public base2,public base3{
    public:
    void show(){
        cout<<a<<endl;
        cout<<b<<endl;
        cout<<c<<endl;
        cout<<"sum of all numbers is "<<a+b+c<<endl;

    }
};

int main(){
    derived A;
    A.set_a(10);
    A.set_b(20);
    A.set_c(30);
    A.show();

}

