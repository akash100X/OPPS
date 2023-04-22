#include<iostream>
using namespace std;

class Y;

class X{
    int data;
    public:
        void setdata(int value){
            data = value;
        }
    friend void add(X,Y);
};

class Y{
    int num;
    public :
        void setvalue(int n){
            num=n;
        }
    friend void add(X,Y);
};


void add(X a,Y b){
    cout<<"sum of X and Y is :"<<a.data+b.num<<endl;
}

int main(){
    X a;
    a.setdata(5);

    Y b;
    b.setvalue(101);

    add(a,b);
    return 0;
}