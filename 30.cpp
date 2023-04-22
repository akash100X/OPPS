#include<iostream>
using namespace std;

int main(){
    // int a=5;
    // int *ptr= &a;
    // cout<<"value of a is: "<<*(ptr)<<endl;

    // int *ptr1=new int(45);
    
    // delete ptr1;
    // cout<<*(ptr1)<<endl;
    // return 0;

    int *arr=new int[3];
    arr[0]=12;
    arr[1]=21;
    arr[2]=56;
    delete[] arr;
    cout<<"The value of arr[0] is: "<<arr[0]<<endl;
    cout<<"The value of arr[1] is: "<<arr[1]<<endl;
    cout<<"The value of arr[2] is: "<<arr[2]<<endl;

    return 0;
}