/*sum of all odd no. from  (1 to n) using for loop*/
#include <iostream>
using namespace std;

int main() {

    int i,n,sum=0;
    cout << "Print sum of odd numbers till : ";
    cin >> n;

    for(i=1; i<=n; i+=2)
        {
            sum+=i;
        }
    
    cout << endl << "Sum of odd numbers from 1 to " << n << " is : " << sum;

    return 0;
}
