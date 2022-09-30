#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool IsLoggedIn(){
    string username,password,un,pa;
    
    cout<<"Enter username: ";
    cin>>username;
    cout<<"Enter password: ";
    cin>>password;

    ifstream read("C:\\" + username + ".txt");
    getline(read, un);
    getline(read, pa);

    if(un == username && pa == password){
        return true;
    }
    else
    {
        return false;
    }
}

int main(){
    int choice;
    cout<<"1: Registration\n2: Login\nYour choice";
    cin>>choice;

    if(choice==1)
    {
        string username,password;

        cout<<"select a username: ";
        cin>>username;
        cout<<"select a password: ";
        cin>>password;
        ofstream file;
        file.open("C:\\" + username + ".txt");
        file  << username << endl << password;
        file.close();
        main();

    }
    else if (choice==2)
    {
        bool status = IsLoggedIn();

        if(!status)
        {
            cout<<"False login" << endl;
            system("PAUSE");
            return 0;
        }
        else
        {
            cout<< "succesfully login in!" <<endl;
            system("PAUSE");
            return 1;
        }
    }
}