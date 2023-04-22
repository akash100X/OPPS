#include <iostream>
using namespace std;

class Employee
{
    int id;
    int salary;

public:
    void setdata(void)
    {
        salary = 10000;
        cout << "Enter your id :" << endl;

        cin >> id;
    }
    void getdata(void)
    {
        cout << "your id is :" << id << endl;
    }
};

int main()
{
    Employee fb[5];
    for (int i = 0; i < 5; i++)
    {
        fb[i].setdata();
        fb[i].getdata();
    }

    return 0;
}