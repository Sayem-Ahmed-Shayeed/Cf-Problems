/*  
                        __ OP_VIMDHAYAK__
                        _________________
                          _____________
                             _______
                               ___
                                -                   
*/
#include <bits/stdc++.h>
#include <string>
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define pb push_back
#define ll long long int
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define mx_ele(v) *max_element(v.begin(), v.end())
#define mnm_ele(v) *min_element(v.begin(), v.end())
#define endl "\n"
#define vint(v) vector<int> v
#define vll(v) vector<long long int> v
#define vstring(s) vector<string> s
using namespace std;
void cheems()
{
    
    int n;
    cin>>n;
    string s;
    cin>>s;
    int flag=0;
    string ans="";
    for(int i=0;i<n;)
    {
        if(s[i+2]!='a' and s[i+2]!='e')
        {
            if(s[i+3]=='a' or s[i+3]=='e')
            {
                ans+=s[i];
                ans+=s[i+1];
                if(i+2<n-1)
                {
                    ans+='.';
                }
                i+=2;
            }
            else
            {
                ans+=s[i];
                ans+=s[i+1];
                 ans+=s[i+2];
                if(i+3<n-1)
                {
                    ans+='.';
                }
                i+=3;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<ans[i];
    }
    cout<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t ;
    cin >> t;
    while (t--)
    {
        cheems();
    }
}