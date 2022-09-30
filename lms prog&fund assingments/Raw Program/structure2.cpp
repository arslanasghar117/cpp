#include<iostream>
using namespace std;
struct student
{
	string Name;
	int Rollno;
};
int main()
{
	student a;
	cout<<"Enter your Name:";
	cin>>a.Name;
	cout<<"Enter your Rollno:";
	cin>>a.Rollno;
	cout<<a.Name<<endl;
	cout<<a.Rollno<<endl;
	return 0;
}
