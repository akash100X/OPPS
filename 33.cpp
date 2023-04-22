#include<iostream>
using namespace std;

class Student{
    int roll;
    int attendence;
    public:
        void setdata(int a,int b){
            roll=a;
            attendence=b;
        }
        void display(){
            cout<<"roll no.: "<<roll<<endl;
            cout<<"attendence is: "<<attendence<<endl;
        }
};

int main(){
    
    Student *ptr=new Student[3];
    Student *ptrTemp=ptr;
    int i,p,q;
    for ( i = 0; i < 3; i++)
    {
        cout<<"Enter Roll no.: "<<endl;
        cin>>p;
        cout<<"Enter attendence: "<<endl;
        cin>>q;
        (*ptr).setdata(p,q);
        ptr++;
    }
    for ( i = 0; i < 3; i++)
    {
        ptrTemp->display();
        ptrTemp++;

    }
}