#include <bits/stdc++.h>
#include <map>
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define pb push_back
#define ll long long int
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define mx_ele(v) *max_element(v.begin(), v.end())
#define mnm_ele(v) *min_element(v.begin(), v.end())
#define endl "\n"
#define vint(v) vector<int> v;
#define vll(v) vector<long long int> v;
#define vstring(s) vector<string> s;
using namespace std;
void contest()
{
    ll n,k;
    cin>>n>>k;
    if(n%k==0 or n%2==0)
    {
        yes;
        return;
    }
    else
    {
        ll rem1=n-2;
        if(rem1%k==0)
        yes;
        else
        {
            ll rem2=n-k;
            if(rem2%2==0)
            yes;
            else
            no;
        }
    }
}

int main()
{
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        contest();
    }
}


