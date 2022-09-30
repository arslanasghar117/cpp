#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	string txt,txp;
	ofstream first("source.txt");
	first<<"hello";
	first.close();
	ofstream second("check.txt");
	second<<"jello";
	second.close();
	ifstream readfirst("source.txt");
	while(getline(readfirst,txt))
	{
		cout<<txt;
	}
	readfirst.close();
	cout<<endl<<endl;
	ifstream readsecond("check.txt");
	while(getline (readsecond,txp))
	{
		cout<<txp;
	}
	readsecond.close();
	cout<<endl<<endl;
	
	/*cout<<strcmp(txt,txp);
	{
		if(txt>txp)
		{
			cout<<"txt >";
		}
	}
	
	
	*/
	
	
	if(txt.compare(txp)==0)
	{
	 cout<<"equal";
	}
	else
	{
		cout<<"not equal";
	}
}
