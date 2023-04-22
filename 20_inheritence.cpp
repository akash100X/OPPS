#include <iostream>
using namespace std;

class base
{
    int data1;

public:
    int data2;
    void setdata();
    int getdata1();
};

void base ::setdata()
{
    data1 = 10;
    data2 = 20;
}

int base ::getdata1()
{
    return data1;
}

class Derived : public base
{
   int data3;

public:
    
    void setdata2();
    void display();
};

void Derived ::setdata2()
{
    data3 = data2 * getdata1();
}

void Derived :: display(){
    cout<<"The value of data1 is:"<<getdata1()<<endl;
    cout<<"The value of data2 is:"<<data2<<endl;
    cout<<"The value of data3 is:"<<data3<<endl;
}

int main(){
    Derived der;
    der.setdata();
    der.setdata2();
    der.display();
    return 0;
}