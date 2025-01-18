
#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ans=0;
        for(int i=0; i<n-2; ++i)
        {
            if(ans)
            {
                s[i]='0';
                continue;
            }
            if(s[i]=='1')
            {
                ans=1;
            }
        }
        if(ans)
        {
            s[n-1]='0';
            s[n-2]='0';
        }
        cout<<s<<endl;
    }
}
