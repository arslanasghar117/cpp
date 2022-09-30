#include<iostream>
using namespace std;
int main()
{
	int i,n,sum=0,num=0,kum=0,j;
	cout<<"Enter a number :";
	cin>>n;
	cout<<endl;
	
	//part1
	
	cout<<"(part1) "<<endl<<endl<<"All natural numbers in reverse (from "<<n<<" to 1): ";
	for(i=n;i>0;i--)
	{
		cout<<i;
	}
	cout<<endl<<endl;
	//part2
	
	cout<<"(part2) "<<endl<<endl<<"Sum of all even numbers between 1 to "<<n<<": ";
    for(i=0; i<=n; i=i+2)
    {
        sum=sum+i;
    }
    cout<<sum;
	cout<<endl<<endl;
	
	//part3
	
	cout<<"(part3) "<<endl<<endl<<"Sum of all odd numbers between 1 to "<<n<<": ";
	for(i=1;i<=n;i=i+2)
	{
		num=num+i;
	}
	cout<<num;
	cout<<endl<<endl;
	
	//part 4
    
    cout<<"(part4) "<<endl<<endl<<"Multiplication table of number "<<n<<": ";
    cout<<endl;
    for(i=1; i<=10; i++)
    {
        cout<<n<<"*"<<i<<"="<<n*i<<endl;
    }
    cout<<endl;
    
	//part5
	
	cout<<"(part5) "<<endl<<endl<<"Sum of all natural numbers between 1 to "<<n<<": ";
	for(i=1;i<=n;i++)
	{
		kum=kum+i;
	}
	cout<<kum;
	cout<<endl<<endl;
	
	//part6
	
	for (j=0;n>0;j++)
	n=n/10;
	{
		cout<<endl<<"(part6) "<<endl<<endl<<"Total digits in number: "<<j;
	}
	return 0;
}
