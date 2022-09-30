#include <iostream>
using namespace std;
class x{
    int a;
    string a1;
    public:
    x(){
        a=0;
        a1="a1";
    }
    x(int b){
        a=b;
    }
    x(string c){
        a1=c;
    }
    x(int b,string c){
        a=b;
        a1=c;
    }
    x(string b,int c){
        a=c;
        a1=b;
    }
    void show(){
        cout<<"a is "<<a<<endl;
        cout<<"a1 is "<<a1<<endl;
    }
};
int main(){
    x x1,x2(5),x3("kela kha"),x4(150,"hihihihi"),x5("hahahah",250);
    x1.show();
    x2.show();
    x3.show();
    x4.show();
    x5.show();

}
