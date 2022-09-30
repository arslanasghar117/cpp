#include <iostream>
#include <fstream>

using namespace std;

bool Login(){
    string user,pass,un,pw;
    cout<<"Enter username: ";
    cin>>user;
    cout<<"Enter password: ";
    cin>>pass;

    ifstream read("lig.txt");
    getline(read,un);
    getline(read,pw);

    if(un == user && pw == pass)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main(){
    int ch;

    cout<<"\n1: Registration\n2: Login\nYour choice: ";
    cin>>ch;
    if(ch==1)
    {
        string username,password;
        cout<<"select username: ";
        cin>>username;
        cout<<"select password: ";
        cin>>password;
        ofstream file("lig.txt");
        file<<username<<endl<<password;
        file.close();
        main();
    }
    else if(ch==2)
    {
        bool a=Login();

        if(!a)
        {
            cout<<"False login";
        }
        else
        {
            cout<<"succcesfully login";
        }
    }
}