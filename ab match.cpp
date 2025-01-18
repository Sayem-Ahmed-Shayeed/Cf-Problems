/*       LESS THAN ZERO
                   DIV-2               */
#include <bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t; cin>>t;
    while(t--)
    {
        int n,k;cin>>n>>k;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int temp;cin>>temp;
            v.push_back(temp);
        }
        if(k==1)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
}



