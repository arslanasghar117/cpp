#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>

using namespace std;

int menu()
{
    int choice;
	cout <<"Welcome to the console phonebook application;\n"
         <<"1. Enetr record\n"
         <<"2. view records\n"
         <<"3. Exit\n"
         <<"Enter your choice :";
    cin >> choice;
    return choice;
}

void addRecords(){

    string fName , lName , pNumber;
    int session = 0;
    while (session != 2) {
    cout<<"Enter the firstname followed by lastname of the person";
    cin>> fName>> lName;

    cout<<"Enter the phone number of this person";
    cin>>pNumber;

    ofstream phonebook;
    phonebook.open ("phonebook.txt");
    phonebook << "Name: " << fName << " " << lName << ": " << pNumber << "\n";
    phonebook.close();

    cout <<"Would you to like to add more records? Type 1. Yes 2. No: ";
    cin >> session; 
    }

}

void viewRecords(){
    string line;
    ifstream phonebook ("phonebook.txt");
    if (phonebook.is_open())
    {
        while (getline (phonebook, line))
        {
            cout << line <<"\n";
        }
        phonebook.close();
    }
    else cout << "connot find the file! are you sure you added recor?\n";
}




int main()
{
    int option;
    do{
        option = menu();
        switch(option){
            case 1: addRecords();
                break;
            case 2: viewRecords();
                break;
            case 3:
                break;
            default: cout<<" is an invalid option\n";        
        }


    }while(option != 3);


    return 0;
}
