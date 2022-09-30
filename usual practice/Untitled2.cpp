#include <iostream>
using namespace std;
 class house{
     string color;
     string type;
     string address;
     int price;
     int area;
     string location;
     public:
     house(string a,string b,string c,int d,int e,string f){
         color=a;
         type=b;
         address=c;
         price=d;
         area=e;
         location=f;
     }
     void show(){
         cout<<"welcome to my house"<<endl;
         cout<<color<<endl<<type<<endl<<address<<endl<<price<<endl<<area<<endl<<location<<endl;
     }
 };
 int main(){
     house h("a","d","d",23,43,"ssd");
     h.show();
 }
