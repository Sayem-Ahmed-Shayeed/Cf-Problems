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
    cin >> n;
    string s;
    cin >> s;
    int temp=n;
    // vowel= a, e
    // cons=b , c,d
    string ans = "";
    if(n<3)
    cout<<s<<endl;
    for(int i=0;i<n;i++)
    {
        if(s[i+2]!='a' or s[i+2]!='e')
        {
            if(n>3)
            {
                ans+=s[i];
                ans+=s[i+1];
                ans+=s[i+2];
                if(temm-3!=0)
                {
                    temp-=3;
                    ans+='.';
                }
                i+=2;
            }
        }
        else
        {
            ans+=s[i];
            ans+=s[i+1];
             if(temm-2!=0)
                {
                    temp-=2;
                    ans+='.';
                }
                i+=1;
        }
        
    }
    cout << ans << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        cheems();
    }
}