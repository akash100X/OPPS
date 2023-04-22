#include <iostream>
#include <cmath>

using namespace std;

class simpleCalculator
{
protected:
    int a, b;

public:
    int get_data(int x, int y)
    {
        a = x;
        b = y;
    }
    int add()
    {
        return a + b;
    }

    int subtraction()
    {
        return a - b;
    }
    int multipli()
    {
        return a * b;
    }

    float divide()
    {

        return (float)a / b;
    }

    void display()
    {
        cout << "addition is : " << add() << endl;
        cout << "subtraction is : " << subtraction() << endl;
        cout << "multipli is : " << multipli() << endl;
        cout << "divide is : " << divide() << endl;
    }
};

class scintific
{
protected:
    int c, d;
    int sqr, cube;
    float sqrt1, curt1;

public:
    void setdata(int x, int y)
    {
        c = x;
        d = y;
    }

    void perform()
    {
        sqr = c * c;
        cube = c * c * c;
        sqrt1 = sqrt(d);
        curt1 = cbrt(d);
    }

    void display1()
    {
        cout << "sqr is : " << sqr << endl;
        cout << "cube is : " << cube << endl;
        cout << "sqrt is : " << sqrt1 << endl;
        cout << "cbrt is : " << curt1 << endl;
    }
};


class hybrid : public simpleCalculator,public scintific
{

    public:

        void setall(int x, int y){
            get_data(x,y);
            setdata(x,y);
        }
       
        void all_display(){
         perform();
         display();
         display1();
        }
};
int main()
{
    int x, y;

    cout << "Enter the value of a : " << endl;
    cin >> x;
    cout << "Enter the value of b : " << endl;
    cin >> y;
   hybrid ak;
    
    ak.setall(x,y);
    ak.all_display();
}