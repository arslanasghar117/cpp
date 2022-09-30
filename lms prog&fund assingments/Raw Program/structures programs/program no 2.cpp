/* c++ program to  print all natural number from(n to 1) using for loop*/
#include <iostream>
using namespace std;
 
int main()
{
    int n, i;
 
    cout<<"Enter any number: "<<endl;
    /*here user enter the value*/
    cin>>n;
    for(i=n; i>=1; i--)
    {
        cout<<i;
    }
    return 0;
 
}
