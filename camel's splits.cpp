/*  :: LESS THAN ZERO ::   */
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
        vector<char>unq;
        string dup;
        dup=s;
        sort(dup.begin(),dup.end());
        dup.erase(unique(dup.begin(),dup.end()),dup.end());
        for(char &x:dup)
        {
            unq.push_back(x);
        }
        vector<int>cnt1;
        for(int i=0;i<dup.size();i++)
        {
            int cnt=0;
            for(int j=0;j<n;j++)
            {
                if(dup[i]==s[j])
                    cnt++;
            }
            cnt1.push_back(cnt);
        }
        int ans=0;
        for(int i=0;i<dup.size();i++)
        {
            for(int j=i+1;j<dup.size();j++)
            {
                if((dup[i]==dup[j]-32) || (dup[i]==dup[j]+32))
                {
                    if((cnt1[i]!=0) && (cnt1[j]!=0))
                        ans+=(max(cnt1[i],cnt1[j]));
                }
            }
        }
        cout<<ans<<endl;
    }
}
