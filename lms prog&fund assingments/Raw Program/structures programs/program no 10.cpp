#include <iostream>
using namespace std;
int main()
{
    int n,count=0;
    cout<<"Enter a Integer: ";
    cin>>n;
    
while(n!=0)
    {
count++;
	    n=n/10;
    }
    
cout<<"Total Digits="<<count<<ends;
    return 0;
}
