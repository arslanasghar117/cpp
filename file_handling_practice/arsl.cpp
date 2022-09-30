#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	string txt;
	ofstream myfile("arslan.txt");
	myfile<<"hello name is arslan";
	myfile.close();
	ifstream myreadfile("arslan.txt");
	while(getline(myreadfile,txt))
	{
		cout<<txt;
	}
	myreadfile.close();
}
