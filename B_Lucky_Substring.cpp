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
    cin>>s;
    bool flag4=false;
    int cnt_4=0;
    int cnt_7=0;
    bool flag7=false;
    for(auto x:s)
    {
        if(x=='4')
        {
            flag4=true;
            cnt_4++;
        }
        else if(x=='7')
        {
            flag7=true;
            cnt_7++;
        }
    }
    if(flag4==true and flag7==false)
    {
        cout<<4;
    }
    if(flag4==false and flag7==true)
    {
        cout<<7;
    }
    if(flag4==true and flag7==true)
    {
        if(cnt_4>=cnt_7)
        cout<<4;
        else if(cnt_4<cnt_7)
        cout<<7;
    }
    if(flag4==false and flag7==false)

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    //cin >> t;
    while (t--)
    {
        cheems();
    }
}