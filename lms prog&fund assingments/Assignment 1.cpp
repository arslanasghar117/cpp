                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               z#include<iostream>
using namespace std;
int main()
{
	int a,b;
	char choice;
	cout<<"Enter first number(a) :";
	cin>>a;
	cout<<endl<<"Enter second number(b) :";
	cin>>b;
	cout<<endl<<"Enter between these +,-,*,/,%(choice) :";
	cin>>choice;
	cout<<endl;
	switch (choice)
	{
		case '+':
			cout<<"your choice is '+' a+b :"<<a+b;
		break;
		case '-':
			cout<<"your choice is '-' a-b :"<<a-b;
		break;
		case '*':
			cout<<"your choice is '+' a*b :"<<a*b;
		break;
		case '/':
			cout<<"your choice is '/' a/b :"<<a/b;
		break;
		case '%':
			cout<<"your choice is '%' a%b :"<<a%b;
		break;	
		default:
			cout<<"You enterd a wrong digit";
		break;
	}
	cout<<endl<<endl;
	cout<<"Program is finished";
	return  0;
}
