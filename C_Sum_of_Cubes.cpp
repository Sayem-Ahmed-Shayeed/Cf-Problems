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
    ll n;
    cin >> n;
    ll bound = cbrt(n);

    int flag = 0;
    for (ll i = 1; i <= bound; i++)
    {
        ll a3 = i * i * i;
        ll b3 = n - a3;
        ll cubic_root = cbrt(b3);
        ll new_b3 = cubic_root*cubic_root*cubic_root;

        if (new_b3==b3 and b3>0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        yes;
    else
        no;
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


