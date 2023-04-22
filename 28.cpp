#include <iostream>
using namespace std;

class Person
{
    int id;

public:
    void get_id(int);
    void display()
    {
        cout << "programmer id no. is: " << id << endl;
    }
};

void Person::get_id(int x)
{
    id = x;
}

class Salary :virtual  public Person
{
public:
    int sal;
    void getsalary(int y)
    {
        sal = y;
    }
};

class Bonus :virtual public Person
{
public:
    int bonus;
    void getbonus(int z)
    {
        bonus = z;
    }
};

class Total_salary :  public Salary, public Bonus
{
public:
    void display1()
    {
        display();
        cout << "salary is: " << sal << endl;
        cout << "Bonus is: " << bonus << endl;
        cout << "Total amount is: " << sal + bonus << endl;
    }
};

int main()
{
    Total_salary Akash;
    Akash.get_id(12);
    Akash.getsalary(1000000);
    Akash.getbonus(10000);
    Akash.display1();
    return 0;
}
