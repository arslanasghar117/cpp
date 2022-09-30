#include <iostream>
using namespace std;
class asd{
    int a;
    int b;
    string c;
    public:
    void get(){
        cout<<"enter values";
        cin>>a>>b>>c;
    }
    asd(){
        cout<<"sum is :"<<a+b<<endl;
        cout<<"sub is :"<<a-b<<endl;
        cout<<"mul is :"<<a*b<<endl;
        cout<<"div is :"<<a/b<<endl;
    }
    asd(int f,string g){
        int roll=f;
        string name=g;
    }
};
int main(){
    asd a;
    return 0;
}
