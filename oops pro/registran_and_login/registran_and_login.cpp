#include <iostream>
#include <string>
#include <fstream>

using namespace std;

bool Login()
{
    string username,password,un,pw;

    cout<<"Enter your name: ";
    cin>>username;
    cout<<"Enter your password: ";
    cin>>password;

    ifstream read("lib.txt",ios::in);
    getline(read, un);
    getline(read, pw);

    if(un == username && pw == password)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int ch;
    cout<<"\n1:Registration\n2: Login\nYour Choice";
    cin>>ch;

    if(ch==1)
    {
        string username,password;
        cout<<"select a username: ";
        cin>>username;
        cout<<"select a password: ";
        cin>>password;

        ofstream file;
        file.open("lib.txt");
        file  <<username  <<endl<<password;
        file.close();
        main();

    }
    else if(ch==2)
    {
        bool status=Login();

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