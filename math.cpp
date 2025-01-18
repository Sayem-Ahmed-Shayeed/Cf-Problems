#include <string.h>
#include <iostream>
#include <cstring>
#include<stdlib.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n%7==0)
            cout<<n<<endl;
        else
        {
        int rem=n%7;
        int need=7-rem;
        if(rem<=2)
            cout<<(n/7+need)<<endl;
        else
            {
                cout<<n-rem;
            }
                }


    }
}
