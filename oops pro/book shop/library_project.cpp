#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;

class book  {
private:
    char *auther,*publisher,*title;
    float *price;
    int *stock;
public:
    book()  {
    auther= new char[20];
    title=new char[20];
    publisher=new char[20];
    price= new float;
    stock=new int;
    }
    void feeddata();
    void editdata();
    void showdata();
    int search(char[],char[]);
    void buybook();

};

void book::feeddata()   {
    cin.ignore();
    cout<<"\nEnter the author name: "; cin.getline(auther,20);
    cout<<"\nEnter the title name: "; cin.getline(title,20);
    cout<<"\nEnter the publisher name: "; cin.getline(publisher,20);
    cout<<"\nEnter the price: "; cin>>*price;
    cout<<"\nEnter the stock: "; cin>>*stock;
}

void book::editdata()   {
    cout<<"\nEnter the author name: "; cin.getline(auther,20);
    cout<<"\nEnter the title name: "; cin.getline(title,20);
    cout<<"\nEnter the publisher name: "; cin.getline(publisher,20);
    cout<<"\nEnter the price: "; cin>>*price;
    cout<<"\nEnter the stock: "; cin>>*stock;
}

void book::showdata()   {
    cout<<"\nAuthor Name: "<<auther;
	cout<<"\nTitle Name: "<<title;
	cout<<"\nPublisher Name: "<<publisher;
	cout<<"\nPrice: "<<*price;
	cout<<"\nStock Position: "<<*stock;
}

int book::search(char tbuy[20],char abuy[20] )   {
    if(strcmp(tbuy,title)==0 && strcmp(abuy,auther)==0)
        return 1;
    else return 0;

}

void book::buybook()    {
    int count;
    cout<<"\nEnter the no of books to buy: ";
    cin>>count;
    if (count<=*stock)
    {
        *stock=*stock-count;
        cout<<"\nbook bought succesfully";
        cout<<"\nAmount: Rs. "<<(*price)*count;
    }
    else
    {
        cout<<"\nRequird Coipes not i stock";
    }
}

int main()  {
    book *B[20];
    int i=0,r,t,choice;
    char titlebuy[20],autherbuy[20];
    while (1)
    {
        cout<<"\n\n\t\tMENU"
		<<"\n1. Entry of New Book"
		<<"\n2. Buy Book"
		<<"\n3. Search For Book"
		<<"\n4. Edit Details Of Book"
		<<"\n5. Exit"
		<<"\n\nEnter your Choice: ";
        cin>>choice;

        switch (choice){
            case 1:
                B[i] = new book;
                B[i]->feeddata();
                i++; break;
            case 2:cin.ignore();
                cout<<"\nEnter Title Of Book: "; cin.getline(titlebuy,20);
			    cout<<"Enter Author Of Book: ";  cin.getline(autherbuy,20);
                for(t=0;t<i;t++){
                    if(B[t]->search(titlebuy,autherbuy)){
                        B[t]->buybook();
                     break;
                    }
                }
                if(t==1)
                cout<<"\nThis Book is Not in Stock";
                break;
            case 3:cin.ignore();
                cout<<"\nEnter Title Of Book: "; cin.getline(titlebuy,20);
                cout<<"Enter Author Of Book: ";  cin.getline(autherbuy,20);

               for(t=0;t<i;t++){
                    if(B[t]->search(titlebuy,autherbuy))	{
				    cout<<"\nBook Found Successfully";
                    B[t]->showdata();
                    break;
                    }
                }
                if(t==i)
                cout<<"\nThis book is not in stock";
                break;

            case 4:cin.ignore();
                cout<<"\nEnter Title Of Book: "; cin.getline(titlebuy,20);
			    cout<<"Enter Author Of Book: ";  cin.getline(autherbuy,20);

                for(t=0;t<i;t++)	{
					if(B[t]->search(titlebuy,autherbuy))	{
						cout<<"\nBook Found Successfully";
						B[t]->editdata();
						break;
					}
				}
				if(t==i)
				cout<<"\nThis Book is Not in Stock";
				break;
            case 5: exit(0);
            default:cout<<"\nInvalid choice enterd";
        }
    }


return 0;
}