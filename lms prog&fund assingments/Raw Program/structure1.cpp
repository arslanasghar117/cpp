#include<iostream>
using namespace std;
struct date
{
	string day,month;
	int year;
};
int main()
{
	date a;
	cout<<"Enter your day of birth:";
	cin>>a.day;
	cout<<"Enter your month of birth:";
	cin>>a.month;
	cout<<"Enter your year of birth:";
	cin>>a.year;
	cout<<a.day<<"/"<<a.month<<"/"<<a.year;
	return 0;
}
