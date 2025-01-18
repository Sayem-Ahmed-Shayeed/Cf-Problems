/*    LESS THAN ZERO    */
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int bcnt=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='B')
                bcnt++;
        }
        if(bcnt==k)
        {
            cout<<0<<endl;
        }
        else if(k==0)
        {
            cout<<1<<endl;
            cout<<n<<" "<<"A"<<endl;
        }
        else if(k!=0)
        {
            if(bcnt>k)
            {
                int cnt=0;
                int temp=0;
                for(int j=n-1; j>=0; j--)
                {
                    if(s[j]=='B')
                        cnt++;
                    if(cnt==k)
                    {
                        temp=j;
                        break;
                    }
                }
                cout<<1<<endl;
                cout<<temp<<" "<<"A"<<endl;
            }
            else if(bcnt<k)
            {
                int cnt=0;
                int temp=0;
                for(int j=0; j<n; ++j)
                {
                    if(s[j]=='A')
                        cnt++;
                    if(cnt==(k-bcnt))
                    {
                        temp=j;
                        break;
                    }
                }
                cout<<1<<endl;
                cout<<temp+1<<" "<<"B"<<endl;
            }
        }

    }
}
