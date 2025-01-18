#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,r;
        cin>>l>>r;
        int even=0;
        int odd=0;
        for(int i=l;i<=r;i++){
            even+=(!(i%2));
            odd+=(i%2);
        }
        cout<<min((odd/2),even)<<endl;
    }
}

