#include <iostream>
using namespace std;

int count = 0;
class num
{
public:
    num()
    {
        count++;
        cout << "This is the time when constructer is called " << count << endl;
    }

    ~num()
    {
        count--;
        cout << "This is the time when destructer is called" << count << endl;
    }
};

int main()
{
    cout << "main program is start" << endl;
    cout << "object creting" << endl;
    num n1;
    {
        cout << "Entering the block" << endl;
        cout << "criting two objects" << endl;

        num n2, n3;
        cout << "Exiting the block" << endl;
    }

    cout << "back to main" << endl;
    return 0;
}