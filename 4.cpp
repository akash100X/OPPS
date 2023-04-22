#include<iostream>
#include<string>
using namespace std;

class binary{
    string a;
    int chk_binary();  
    public:
    int read();
//    int chk_binary();
    int once_complement();
    int display();

};
int binary::read(){
    cout<<"Enter a binary number :"<<endl;
    cin>>a;
}

int binary :: chk_binary(){
    for(int i=0; i<a.length();i++){
        if(a.at(i) !='0' && a.at(i) !='1'){
            cout<<"incorrect binary number "<<endl;
            exit(0);  // return 0;
        }
    }
}

int binary::once_complement(){
    chk_binary();           //  private function ko ese call kr sakte h
    for(int i=0;i<a.length();i++){
        if(a.at(i)=='0'){
            a.at(i)='1';

        }
       else
        {
            a.at(i)='0';
        }
    }
} 

int binary ::display(){
    for(int i=0;i<a.length();i++){
        cout<<a.at(i);
    }
    cout<<endl;
}

int main(){
    binary ak;
    ak.read();
 //   ak.chk_binary();
    ak.once_complement();
    ak.display();
    return 0;
}