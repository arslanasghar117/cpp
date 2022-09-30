#include <iostream>
using namespace std;
int main()
{
	int age;
	cout<<"Enter your age:";
	cin>>age;
	if(age>18&&age<100)
	{
		cout<<"You can cast vote because your age is greater than 18 or less than 100";
	}
	else
	{
		cout<<"You can not cast vote because your age is less than 18 or greater than 100";
	}
	return 0;
}
