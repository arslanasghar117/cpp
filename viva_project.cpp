#include <iostream>
using namespace std;

class X
{
    public:
    int a=0;
    X()
    {
        a=10;   
    }
    void show()
    {
        cout<<"a is: "<<a<<endl;
    }
};

class Y:public X
{
    int b;
    public:
    Y()
    {
        b=5;
    }
    void show()
    {
        cout<<"a is: "<<a<<endl;
        cout<<"b is: "<<b<<endl;
    }
};

int main()
{
    X x1;
    Y y1;
    x1.show();
    y1.show();
}