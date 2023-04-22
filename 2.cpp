#include <iostream>
using namespace std;

class employee
{
    int salary=100000;
    int bonus;

public:
    int setsalary();
    int getsalary();
};

int employee ::setsalary(){
    cout<<"bonus :";
    cin>>bonus;
}

int employee:: getsalary()
{
    cout<<"salary is :"<<salary<<endl;
    cout<<"bonus is :"<<bonus;
    
}

int main(){
    employee akash;
    akash.setsalary();
    akash.getsalary();
    return 0;

}