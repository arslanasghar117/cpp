#include <iostream>
using namespace std;

int main() {

    int i, n;
    cout << "Enter any number : ";
    cin >> n;

    cout << endl << "Natural numbers from 1 to " << n << endl;
    for(i = 1; i <= n; i++) {

        cout << i;
    }

    return 0;
}
