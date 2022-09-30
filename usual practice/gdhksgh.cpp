#include<iostream>
using namespace std;
class student
{
    int arr,brr,crr;
public:
    student(){
        arr=25;
		brr=15;
		crr=5;
    }
    void set(int d,int e,int f){
        arr=d,brr=e,crr=f;
    }
    void show(){
        cout<<"hello";
    }
};
int main(){
    student s1,s3;
    s1.show();
}
