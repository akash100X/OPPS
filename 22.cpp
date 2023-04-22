#include<iostream>
using namespace std;

class base{
    protected:
    int a;
    private:
    int b;
};

class derived:protected base{

};

int main(){
    base A;
    derived B;
    // cout<<A.a;  will not work
    // cout<<B.a;
}