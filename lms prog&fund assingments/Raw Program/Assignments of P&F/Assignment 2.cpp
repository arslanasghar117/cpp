#include<iostream>
using namespace std;
int main()
{
	string num;
	int n=num.size(),i,j=0,sum=0,temp,count=0;
	cout<<"Enter a number: ";
	cin>>n;
	cout<<"Enter the same number again: ";
	cin>>num;
	cout<<endl;
	cout<<"(part1) All natural numbers in reverse (from "<<n<<" to 1): ";
	for(i=n;i>0;i--)
	{
		cout<<i;
	}
	cout<<endl;
	cout<<endl;
	//part 2
	cout<<"(part2) Sum of all even numbers between 1 to "<<n<<": ";
    for(i=2; i<=n; i+=2)
    {
        sum += i;
    }
    cout<<(n, sum);
	cout<<endl;
	cout<<endl;

    //part 3
    cout<<"(part3) Sum of all odd numbers between 1 to "<<n<<": ";
    for(i=1; i<=n; i+=2)
    {
        sum += i;
    }
    cout<<(n,sum);
    cout<<endl;
    cout<<endl;
    //part 4
    cout<<"(part4) Multiplication table of number "<<n<<": ";
    cout<<endl;
    for(i=1; i<=10; i++)
    {
        cout<<n<<"*"<<i<<"="<<n*i<<endl;
    }
    cout<<endl;
    //part 5
    for(i=1; i<=n; i++)
    {
        sum=sum+1;
    }
    cout<<"(part5) Sum of all natural numbers between 1 to "<<n<<": "<<sum;
    cout<<endl;
    cout<<endl;
    //part 6
	for(i=0;i<n;++i)
    {
       if(!isdigit(num[i]))
	{
		break;
	}
	++j;
	}
	cout<<"(part6) Number of digits in this number is: "<<j;
    
	return 0;
}
