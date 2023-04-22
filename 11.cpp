#include <iostream>
using namespace std;

class B;

class A
{
    int a;

public:
    void setdata(int x)
    {
        a = x;
    }

    void display()
    {
        cout << "the value of a is :" << a<<endl;
    }
    friend void swap(A&, B&);
};

class B
{
    int b;

public:
    void setvalue(int y)
    {
        b = y;
    }

    void display()
    {
        cout << "The value of b is :" << b << endl;
    }
    friend void swap(A&, B&);
};

void swap(A&  o1, B & o2)
{
    int temp = o1.a;
    o1.a = o2.b;
    o2.b = temp;
}

int main(){
    A c1;
    c1.setdata(50);
    c1.display();

    B c2;
    c2.setvalue(1000);
    c2.display();


    swap(c1,c2);
    cout<<"After swap a=";
    c1.display();

    cout<<"After swap b=";
    c2.display();




}