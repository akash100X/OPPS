#include <iostream>
using namespace std;

class Employee
{
public:
    int id;
    float salary;
    Employee(int a)
    {
        id = a;
        salary = 54.0;
    }
    Employee(){ }
};

class programmer : public Employee
{
public:
    int languagecode;
    programmer(int a)
    {
        id=a;
        languagecode=9;
    }

    void display()
    {

        cout << "Employee id is :" <<id<<endl;
    }
};

int main()
{
    Employee tinku(1), akash(2);
    cout<<tinku.salary<<endl;
    cout<<akash.salary<<endl;

    programmer skillf(10);
    cout<<skillf.languagecode<<endl;
    cout<<skillf.id<<endl;

    skillf.display();
   
}