#include <bits/stdc++.h>
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
    if (a == b)
        cout << 0 << " " << 0 << endl;
    else
    {
        ll diff = abs(a - b);
        ll move = min(a % diff, diff - a % diff);
        cout << diff << " " << move << endl;
    }
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
