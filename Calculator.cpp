#include <iostream>
using namespace std;

void Addition();
void Subtraction();
void Multiplication();
void Division();

int main()
{
    int ch;
    do
    {
        cout<<"\tCalculator";
        cout<<"\n1: Addition";
        cout<<"\n2: Subtraction";
        cout<<"\n3: Multiplication";
        cout<<"\n4: Division";
        cout<<"\n5: Exit";
        cout<<"\nWhat is your choicce (1/2/3/4/5): ";
        cin>>ch;
        system("cls");
        switch (ch)
        {
        case 1:
            Addition();
            break;
        case 2:
            Subtraction();
            break;
        case 3:
            Multiplication();
            break;
        case 4:
            Division();
            break;
        default:
            break;
        }
    } while (ch!=5);
}

void Addition()
{
    int a,b,sum=0;
    cout<<"enter first value: ";
    cin>>a;
    cout<<"enter second value: ";
    cin>>b;
    sum=a+b;
    cout<<"Addition is: "<<sum;
}

void Subtraction()
{
    int a,b,sub=0;
    cout<<"enter first value: ";
    cin>>a;
    cout<<"enter second value: ";
    cin>>b;
    sub=a-b;
    cout<<"Subtraction is: "<<sub;
}

void Multiplication()
{
    int a,b,mul=0;
    cout<<"enter first value: ";
    cin>>a;
    cout<<"enter second value: ";
    cin>>b;
    mul=a*b;
    cout<<"Multiplication is: "<<mul;
}

void Division()
{
    int a,b,div=0;
    cout<<"enter first value: ";
    cin>>a;
    cout<<"enter second value: ";
    cin>>b;
    div=a/b;
    cout<<"Division is: "<<div;
}