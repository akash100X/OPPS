#include <iostream>
using namespace std;

class freefire
{
    int uid;
    static int count;

public:
    void setdata(void)
    {
        cout << "Enter your id : " << endl;
        cin >> uid;
        count++;
    }

    void getdata(void)
    {
        cout << count << "  no. person uid is:" << uid << endl;
    }

    static void getcount(void)
    {
        cout << "The number of player is :" << count << endl;
    }
};
int freefire::count = 100;  //default value is 0

int main()
{
    freefire Akash, tinku, sameer;
    Akash.setdata();
    Akash.getdata();
    Akash.getcount();

   // freefire::getcount();

    tinku.setdata();
    tinku.getdata();
    freefire::getcount();

    sameer.setdata();
    sameer.getdata();
    freefire::getcount();
}
