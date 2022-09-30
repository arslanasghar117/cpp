#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string firstName,lastName,fullName;
	cout<<"Enter your Firstname: ";
	cin>>firstName;
	cout<<"Enter your Lastname: ";
	cin>>lastName;
	cout<<endl;
	
	//String Comparison
	
	cout<<"(i) String Comparison"<<endl<<endl;
	cout<<"Firstname: "<<firstName<<endl;
	cout<<"Lastname: "<<lastName<<endl<<endl;
	if (firstName.compare(lastName) == 0)
        cout << "Strings are equal." << endl;
    else
        cout<<"Strings are not Equal.";
        cout<<endl<<endl;
    //String Concatenation
    
    cout<<endl;
	cout<<"(ii) String Concatenation"<<endl<<endl;
	cout<<"Fullname: "<<firstName.append(lastName)<<endl<<endl;
	
	//String Copy
	
	cout<<endl;
	cout<<"(iii) String Copy"<<endl<<endl;
	firstName=lastName;
	cout<<"Firstname after copy: "<<firstName<<endl;
	
	return 0;
}
