//group no. 4
//members : asim , moavia , muneeb , shoib , arslan.

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct Record
{
	string name;
	long long int num;
	string email;
	string address;
};

void checkRecord(string name){
	
	ifstream phonebookread("Contact_Book.txt");
	if(!phonebookread.is_open()){
		cout<<"File is not open "<<endl;
	}
	else{
	while(!phonebookread.eof()){
	      string Name;	
		  phonebookread >> Name;	
		  if(Name==name){
			 cout<<"Name is already taken."<<endl;
			 break;
		   }
	    }
	}
}

void addRecord()
{
	Record contact;
	char option= 'y';
	ofstream phonebook;
	phonebook.open("Contact_Book.txt",ios::app);
	cout<<"Enter Contact: \n";
	for(int i=0; option!='n' ; i++ )
	{
	  cout << "Enter Name: ";
	  cin >> contact.name;
	  checkRecord(contact.name);
	  phonebook << contact.name<<" ";
	  cout << "Enter Number: ";
	  cin >> contact.num;
	  phonebook << contact.num<<" ";
	  cout << "Enter email adress: ";
	  cin >> contact.email;
	  phonebook << contact.email<<" ";
	  cout << "Enter Adress: ";
	  cin >> contact.address;
	  phonebook << contact.address<<"\n";	
	  cout << "if you want to enter further contacts enter y else enter n: ";
	  cin >> option;

	  if(option=='n')
		break;
    }
}

void searchRecord(string name)
{
	ifstream phonebookread;
	phonebookread.open("Contact_Book.txt");
	bool isFound=0;
	while(!phonebookread.eof())
	{
		string Name="";
		string Num="";
		string Email="";
		string Address="";	
		phonebookread >> Name;
		phonebookread >> Num;
	    phonebookread >> Email;
	    phonebookread >> Address;  
		for(int i=0; i<name.size(); i++)
		{	
		  if(Name[i]==name[i])
		  {
			isFound =1;	
		  }
		  else
		  {
			isFound =0;
			break;
		  }
	    }
	    if(isFound)
	    {
	      cout << "Name: "<<Name<<" "<< "|| Number: "<<Num<<" "<< "|| Email: "<<Email<<" "<<"|| Address: "<<Address<<" "<<endl;
	      break;
        }
        else
        cout << "Not Found! "<<endl;
	}
	
	phonebookread.close();
}

int main()
{
	char choice='0';
	string name;
	cout << "          WELCOME TO CONTACT           \n";
	cout << " ---- phone book record keeping ---- \n\n";

	do{
	    cout << "What would you like to do?" << endl;
	    cout << "1.) Add Contact" << endl;
	    cout << "2.) Search Address Book" << endl;
	    cout << "3.) Exit" << endl << endl;
	    cout << "Enter your choice : ";
	    cin >> choice;

	 switch(choice){
		case '1':
			addRecord();
			break;
		case '2':
		    cout << "Enter name you want to find: ";
			cin >> name;
			searchRecord(name);
			break;
		case '3':
			break;
		default:
			cout << "Please Enter valid number."<<endl;
	    }
    }while(choice !='3');

    return 0;
}
