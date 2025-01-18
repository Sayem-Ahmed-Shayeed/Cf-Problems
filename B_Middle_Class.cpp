/*

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
    ll n;
    cin >> n;
    ll x;
    cin >> x;
    vll(v);
    int diff = 0;
    for (ll i = 0; i < n; i++)
    {
        ll  temp;
        cin >> temp;
        v.pb(temp);
    }
    if (n <= 1)
    {
        if (v[0] >= x)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
    else
    {
        sort(v.begin(), v.end());
        ll diff = 0;
        for (ll i = 0; i < n; i++)
        {
            if (v[i] > x)
            {
                diff += (v[i] - x);
            }
        }
        ll ans = 0;
        for (ll i = n - 1; i >= 0; i--)
        {
            if (v[i] >= x)
                ans++;
            if (v[i] < x && diff > 0)
            {
                ll  a = x - v[i];
                if (diff >= a)
                {
                    diff -= a;
                    v[i] += a;
                    if (v[i] == x)
                        ans++;
                }
            }
        }
        cout << ans << endl;
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
