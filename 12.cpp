#include<iostream>
using namespace std;

class myclass{
    int a;
    int b;
    public:
        myclass(void);
       
        void getdata(void){
            cout<<"The sum is :"<<a+b<<endl;
        }      

};

myclass:: myclass(){

    a=100;
    b=10;
}

int main(){
    myclass A;
    A.getdata();
    A.getdata();
    A.getdata();
    return 0;
}