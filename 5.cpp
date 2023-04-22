#include <iostream>
using namespace std;

class shop
{
    int itemid[100];
    int itemprice[100];
    int counter;

public:
    int initcounter() { counter = 0; }
    int setprice();
    int display();
};

int shop::setprice()
{
    cout << "Enter itemid no. =" << counter + 1 << endl;
    cin >> itemid[counter];
    cout << "Enter item price =" << endl;
    cin >> itemprice[counter];
    counter++;
}

int shop::display()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of the itemid no." << itemid[i] << "is" << itemprice[i] << endl;
    }
}

int main()
{
    shop dukan;
    dukan.initcounter();
    dukan.setprice();
    dukan.setprice();
    dukan.setprice();
    dukan.display();
    return 0;
}