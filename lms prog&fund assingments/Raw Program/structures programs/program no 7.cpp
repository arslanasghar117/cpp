/*c++ program to  print the sum of all even number between 1 to n*/
#include <iostream>
using namespace std;

int main() {

    int i,n,sum=0;
    cout << "Print sum of even numbers till : ";
    /*here user enter the value*/
    cin >> n;

    for(i=1; i<=n; i++) {
        if((i%2) == 0) {
            sum+=i;
        }
    }
    cout << endl << "Sum of even numbers from 1 to " << n << " is : " << sum;

    return 0;
}
