#include <iostream>
using namespace std;

class student
{
protected:
    int roll_number;

public:
    void setnumber(int);
    void display_roll_number();
};

void student::setnumber(int x)
{
    roll_number = x;
}

void student::display_roll_number()
{
    cout << "The roll number is : " << roll_number << endl;
}

class marks : public student
{
protected:
    int physics;
    int maths;

public:
    void setmarks(int a, int b)
    {
        physics = a;
        maths = b;
    }
    void displaymarks();
};

void marks::displaymarks()
{
    cout << "student obtain marks in physics are : " << physics << endl;
    cout << "student obtain marks in maths are : " << maths << endl;
}

class result : public marks
{
    float percentage;

public:
    

    void display()
    {
        display_roll_number();
        displaymarks();
        cout << "Your result is : "  <<(physics+maths)/2 <<"%"<< endl;
    }
};

int main()
{

    result akash;
    akash.setnumber(56);
    akash.setmarks(87, 99);
    akash.display();
}