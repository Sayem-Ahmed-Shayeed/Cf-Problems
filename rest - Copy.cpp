#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt=0;
    vector<string>v;
    for(int i=0;i<n-1;i++)
    {
        string temp;
        temp+=s[i];
        temp+=s[i+1];
        v.push_back(temp);
    }
    string ans;
    int mnm=INT_MIN;
    for(int i=0;i<v.size();i++)
    {
        int cnt=count(v.begin(),v.end(),v[i]);
        if(cnt>mnm)
            ans=v[i];
    }
    cout<<ans;
}
