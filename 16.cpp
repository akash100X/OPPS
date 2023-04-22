#include <iostream>
using namespace std;

class bankdeposite
{
    int principle;
    int years;
    float interestrate;
    float returnvalue;

public:
    bankdeposite() {}
    bankdeposite(int p, int y, float r); // r can be a value like 0.04
    bankdeposite(int p, int y, int r);  // r can be a value like 14
    
    void display(void);
};

bankdeposite::bankdeposite(int p, int y, float r)
{
    principle = p;
    years = y;
    interestrate = r;
    returnvalue = principle;

    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + interestrate);
    }
}

bankdeposite::bankdeposite(int p, int y, int r)
{
    principle = p;
    years = y;
    interestrate = float(r)/100;
    returnvalue = principle;

    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + interestrate);
    }
}

void bankdeposite ::display(void)
{
    cout << endl
         << "your deposit amount is " << principle
         << " after " << years << " years your deposite amount with interst is " << returnvalue;
}

int main()
{
    bankdeposite bd1, bd2, bd3;

    int p;
    int y;
    float r;
    int R;

    cout << "Enter the value of p,y and r" << endl;
    cin >> p >> y >> r;

    bd1 = bankdeposite(p, y, r);
    bd1.display();

   

    cout <<endl<< "Enter the value of p,y and r" << endl;
    cin >> p >> y >> R;

    bd2 = bankdeposite(p, y, R);
    bd2.display();
    return 0;
}