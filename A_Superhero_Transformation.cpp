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
    string s;
    string s1;
    cin >> s >> s1;
    int vowel1 = 0;
    int cons1 = 0;
    int vowel2 = 0;
    int cons2 = 0;
    if(s.size()!=s1.size())
    no;
    else
    {
        int flag=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==s1[i])
            {
                continue;;
            }
            else if(s[i]!=s1[i])
            {
                bool vowel1=false;
                bool cons1=false;
                bool vowel2=false;
                bool cons2=false;
                if((s[i]=='a') or (s[i]=='e') or (s[i]=='i') or (s[i]=='o') or (s[i]=='u'))
                {
                    vowel1=true;
                }
                else
                cons1=true;
                if((s1[i]=='a') or (s1[i]=='e') or (s1[i]=='i') or (s1[i]=='o') or (s1[i]=='u'))
                {
                    vowel2=true;
                }
                else
                cons2=true;
                if(vowel1)
                {
                    if(vowel2)
                    {
                        continue;
                    }
                    else
                    {
                        flag=1;
                        break;
                    }
                }
                else if(cons1)
                {
                    if(cons2)
                    {
                        continue;
                    }
                    else
                    {
                        flag=1;
                        break;
                    }
                }
            }
        }
        if(flag==1)
        no;
        else
        yes;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        cheems();
    }
}