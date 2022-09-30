#include<iostream>
using namespace std;
int main()
{
	int i,sum=0,arr[10];
	for(i=0;i<10;i++)
	{
		cout<<"Enter intergers at index "<<i<<": ";
		cin>>arr[i];
	}
	for(i=0; i<10; i++)
	{
	if((i==3) || (i==5))
	continue;
	sum=sum+arr[i];
	}
	cout<<endl<<"The sum of array elements without indexs 3 & 5 is: "<<sum<<endl<<endl;
	cout<<"integers in reverse order of input: \n";
	for(i=9;i>=0;i--)
	cout<<arr[i]<<endl;
	return 0;
}
