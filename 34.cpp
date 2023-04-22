#include<iostream>
using namespace std;

class base{
    public:
        int a,b,c;
        int set(int x,int y){
            a=x;
            b=y;
            return c=a+b;
        }
        void display(){
            cout<<"base class variable a: "<<c;
        }
};

class derived:public base{
    public:
    int b=7;
    void display(){
        cout<<"derived class variable b: "<<b;
    }
};

int main(){
    base* base_class_pointer;
    base base_obj;
    derived derived_obj;
    base_class_pointer= &derived_obj;
    base_class_pointer->set(4,6);
    base_class_pointer->display();
    return 0;
}