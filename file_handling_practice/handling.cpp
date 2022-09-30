#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream firstfile("myfile.txt");
	firstfile<<"hello";
	firstfile.close();
	ofstream secondfile("myfile2.txt");
	secondfile<<"jello";
	secondfile.close(); 
	string myText;

// Read from the text file
ifstream MyReadFile("myfile2.txt");

// Use a while loop together with the getline() function to read the file line by line
while (getline (MyReadFile, myText)) {
  // Output the text from the file
  cout << myText;
}
	
}
