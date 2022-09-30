#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string line;
    ofstream plagirism("source.txt");
    plagirism << "hello ffggggkkghg \n uyyygghghjjhffiyttyg\n\nghggj";
    plagirism.close();
    ifstream check("source.txt");
    while(getline(check,line));{
        cout<<line;
    }
    check.close();
}