#include<iostream>
using namespace std;
int main()
{
	string firstname="Arslan",lastname="Asghar",fullname;
	//part1
	cout<<"(part1)"<<endl<<endl;
	cout<<firstname;
	cout<<lastname;
	cout<<endl<<endl;
	if(firstname == lastname)
	cout<<"firstname and lastname is same";
	else
	cout<<"firstname and lastname is not same";
	cout<<endl<<endl;
	//part2
	cout<<"(part2)"<<endl<<endl;
	fullname=firstname + " " + lastname;
	cout<<fullname;
	cout<<endl<<endl;
	//part3
	cout<<"(part3)"<<endl<<endl;
	fullname=firstname;
	cout<<fullname;
	cout<<endl;
	return 0;
}
