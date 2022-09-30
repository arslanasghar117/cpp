#include <iostream>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int savings;
    cin>>savings;

    if (savings>7000)
    {
        cout<<"g";
    }
    else if(savings>2000)
    {
        cout<<"j";
    }
    else{
    cout<<"h";
    }
    return 0;
}