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
    ll a, b;
    cin >> a >> b;
    if(b%a==0)
    {
        ll x=b*(b/a);
        cout<<x<<endl;
    }
    else
    {
        cout<<a*b<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
    {
        cheems();
    }
}
