#include <iostream>
using namespace std;

class Kirana
{
    int id;
    int price;

public:
    void setdata(int a, int b)
    {
        id = a;
        price = b;
    }
    void display()
    {
        cout << "Item id is: " << id << endl;
        cout << "Item price is: " << price << endl;
    }
};

int main()
{
    // Kirana A;
    // Kirana *ptr = &A;

    // (*ptr).setdata(12, 100);
    // (*ptr).display();

    Kirana *ptr = new Kirana;
   // (*ptr).setdata(12,5);                right
    ptr->setdata(12,3);
    (*ptr).display();

    Kirana *ptr1=new Kirana[3];
    ptr1->setdata(1,50);
    ptr1->display();
    return 0;
}