/*       Less than zero      */
#include<bits/stdc++.h>
#include<vector>
#include<unordered_map>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        unordered_map<char, int> mp;
        vector<char> dis;
        for (int i = 0; i < s.size(); i++)
        {
            if (mp.find(s[i]) == mp.end())
            {
                dis.push_back(s[i]);
                mp[s[i]] = 1;
            }
        }
        int ans=0;
        int flag=0;
        int flag2=0;
        for (int i = 0;i<dis.size(); i++)
        {
            int cnt = 0;
            for (int j = 0; j < s.size(); j++)
            {
                if (dis[i]==s[j])
                {
                    cnt++;
                }
            }
            if((cnt>1) && (cnt<4))
            {
                if(cnt==3)
                    flag2=1;
                    break;
            }
            else if(cnt==4)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
            cout<<"-1\n";
        else if(flag2==1)
            cout<<6<<"\n";
        else
        cout<<4<<endl;
    }
}

