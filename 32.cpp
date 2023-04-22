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

int main(){
    int size=3;
    Kirana *ptr=new Kirana[size];
    Kirana *ptr1=ptr;
    int i,p,q;
    for(i=0;i<size;i++){
        cout<<"Enter Id and price of item: "<<i+1<<endl;
        cin>>p>>q;
        ptr->setdata(p,q);
        ptr++;
    }

    for(i=0;i<size;i++){
        cout<<"item no.: "<<i+1<<endl;
        ptr1->display();
        ptr1++;
    }


}
