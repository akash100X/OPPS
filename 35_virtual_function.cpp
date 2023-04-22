#include <iostream>
using namespace std;

class result
{
    int rollnumber;
    int sem;

public:
    result(int r, int s)
    {
        rollnumber = r;
        sem = s;
    }
     virtual void display() =0;//pure virtual function
};

class midterm : public result
{
    float marks;

public:
    midterm(int r, int s, float p) : result(r, s)
    {
        marks = p;
    }

    void display(void)
    {
       
        cout << "total marks in midterm is :" << marks << endl;
    }
};
class endterm : public result
{
    float percentage;

public:
    endterm(int r, int s, float p) : result(r, s)
    {
        percentage = p;
    }

    void display(void)
    {
        cout << "percentage in endterm :" << percentage << endl;
    }
};

int main()
{
    //result *baseclasspointer;
    // result obj1(1,3);
   // obj1.display();

    midterm obj2(1,3,89);
    //obj2.display();
   
    endterm obj3(1,3,89.45);
    //obj3.display();

    result *ptr[2];

    ptr[0]=&obj2;
    ptr[1]=&obj3;

    ptr[0]->display();
    ptr[1]->display();
    // baseclasspointer=&obj2;
    // baseclasspointer->display();

    return 0;
}