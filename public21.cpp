#include <iostream>
using namespace std;

class base
{
    private:
    int a=1;
    protected:
    int b=2;
    public:
    int c=3;
    void showbase()
    {
        cout<<"a is :"<<a<<endl;
        cout<<"b is :"<<b<<endl;
        cout<<"c is :"<<c<<endl;
    }
};

class derived1:private base
{
    private:
    int d=4;
    protected:
    int e=5;
    public:
    int f=6;
    void showderived1()
    {
        /*
        cout<<"d is :"<<d<<endl;
        cout<<"e is :"<<e<<endl;
        cout<<"f is :"<<f<<endl;
        */
       //cout<<"a is :"<<a<<endl;
       cout<<"b is :"<<b<<endl;
       cout<<"c is :"<<c<<endl;
    }
};

class derived2:protected base
{
    private:
    int g=7;
    protected:
    int h=8;
    public:
    int i=9;
    void showderived2()
    {
        /*
        cout<<"g is :"<<g<<endl;
        cout<<"h is :"<<h<<endl;
        cout<<"i is :"<<i<<endl;
        */
       //cout<<"a is :"<<a<<endl;
       cout<<"b is :"<<b<<endl;
       cout<<"c is :"<<c<<endl;
    }
};

class derived3:public base
{
    private:
    int j=10;
    protected:
    int k=11;
    public:
    int l=12;
    void showderived3()
    {
        /*
        cout<<"j is :"<<j<<endl;
        cout<<"k is :"<<k<<endl;
        cout<<"l is :"<<l<<endl;
        */
       //cout<<"a is :"<<a<<endl;
       cout<<"b is :"<<b<<endl;
       cout<<"c is :"<<c<<endl;
    }
};

int main()
{
    base base1;
    derived1 d1;
    derived2 d2;
    derived3 d3;
    base1.showbase();
    d1.showderived1();
    d2.showderived2();
    d3.showderived3();


    return 0;
}