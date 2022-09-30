#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	string mytext;
	ofstream myfile("cpp.txt");
	myfile<<"write it on myfile";
	myfile.close();
	ifstream myreadfile("cpp.txt");
	while(getline(myreadfile,mytext)){
	cout<<mytext;
}
myreadfile.close();
}
