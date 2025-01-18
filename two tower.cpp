/*        LESS THAN ZERO
           if you sync with stdio then u dont need to use "\n" instead of endl;
           using continue where you need to skip can significantly lessen the execution time (comparatively lessen 16 mili_second)


*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;cin>>t;
    while(t--)
    {
        int m,n;cin>>m>>n;
        string s;cin>>s;
        string s2;cin>>s2;
        int flag=0;
        int flag1=0;
        int temp=0;
        int temp1=0;

        for(int i=0;i<m-1;i++)
        {
            if(s[i]==s[i+1])
            {
                flag=1;
                temp=i;
                break;
            }
            else
                continue;
        }
          for(int i=0;i<n-1;i++)
        {
            if(s2[i]==s2[i+1])
            {
                flag1=1;
                temp1=i;
                break;
            }
            else
                continue;
        }
        if((flag==1) &&( flag1==1))
        {
            cout<<"NO\n";
        }
        else if((flag==0) && (flag1==0))
            cout<<"YES\n";
        else if((flag==1) && (flag1==0))
        {
            int flag2=0;
            for(int i=m-1;i>temp;i--)
            {
                if(s[i]==s[i+1])
                {
                    flag2=1;
                    break;
                }
                else
                    continue;
            }
            if(flag2==1)
                cout<<"NO\n";
            else
            {
                if(s[m-1]!=s2[n-1])
                    cout<<"YES\n";
                else
                    cout<<"NO\n";
            }
        }
        else if((flag1==1) && (flag==0))
        {
            int flag3=0;
            for(int i=n-1;i>temp1;i--)
            {
                if(s2[i]==s2[i+1])
                {
                    flag3=1;
                    break;
                }
                else
                    continue;
            }
            if(flag3==1)
                cout<<"NO\n";
            else
            {
                if(s2[n-1]!=s[m-1])
                    cout<<"YES\n";
                else
                    cout<<"NO\n";
            }
        }
    }
}
