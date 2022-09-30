#include<iostream>
using namespace std;
int main()
{
	int a,b;
	char choice;
	cout<<"Enter first value(a):";
	cin>>a;
	cout<<"Enter second value(b):";
	cin>>b;
	cout<<"Enter what is your choice e.g. +,-,*,/,%:";
	cin>>choice;
	switch (choice)
	{
		case '+':
		cout<<"Your choice is '+' a+b="<<a+b;
		break;
		case '-':
		cout<<"Your choice is '-' a_b="<<a-b;
		break;
		case '*':
		cout<<"Your choice is '*' a*b="<<a*b;
		break;
		case '/':
		cout<<"Your choice is '/' a/b="<<a/b;
		break;
		case '%':
		cout<<"Your choice is '%' a%b="<<a%b;
		break;
		default:
		cout<<"Your choice is wrong";
		break;
	}
	return 0;
}
