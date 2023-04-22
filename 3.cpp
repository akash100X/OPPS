#include<iostream>
using namespace std;

class ak{
    int a,b,c;
    public:
        int d=20;
        int e=10;
        int setdata(int x,int y,int z);
        int getdata();

};
int ak ::setdata(int x,int y,int z){
    a=x;
    b=y;
    c=z;

}

int ak :: getdata(){
    cout<<a+b+c+d+e<<endl;
    
}

int main(){
    ak addition;
    //addition.d=10;
    //addition.e=20;
    addition.setdata(20,10,40);
    addition.getdata();
    return 0;
}