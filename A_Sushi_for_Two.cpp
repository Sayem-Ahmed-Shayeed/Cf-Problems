/*
                        __ OP_VIMDHAYAK__
                        _________________
                          _____________
                             _______
                               ___
                                -
*/
/*_______________ H E A D E R S ______________*/
#include <bits/stdc++.h>
/*_______________ M A C R O S ______________*/
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define pb emplace_back
#define ll long long int
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define mx_ele(v) *max_element(v.begin(), v.end())
#define mnm_ele(v) *min_element(v.begin(), v.end())
#define endl "\n"
#define vint vector<int>
#define vll vector<long long int>
#define vstring vector<string>
#define pint vector<pair<int, int>>
#define pll vector<pair<ll, ll>>
#define fi first
#define se second
#define mp make_pair
using namespace std;
/* _____________________________G C D_______________________
   ___________E U C L I D I A N       T H E O R E M________*/

ll gcd(ll a, ll b)
{
    while (b != 0)
    {
        ll temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

/*___________________________   "LCM"   ______________________________*/

ll lcm(ll a, ll b)
{
    ll c = a * b / gcd(a, b);
    return c;
}

/*__________    C O N V E R S I O N    T O     A N Y    N U M B E R    S Y S T E M     ________
  _________________           DECIMAL    TO     ANY       RADIX/BASE   _________________________*/

ll decimal_to_any(ll base, ll num)
{
    string ans = "";
    while (num > 0)
    {
        ll rem = num % base;
        ans += (rem + '0');
        num /= base;
    }
    reverse(all(ans));
    ll ans1 = stoll(ans);
    return ans1;
}

/* ______________________VOID CHEEMS________________________*/

void cheems()
{
    int n;
    cin >> n;
    vint  v;
    int one = 0;
    int two = 0;
    vint cnt;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        v.pb(temp);
        if(temp==1 and two==0)
        {
            one++;
        }
        if(temp==2 and one==0)
        {
            two++;
        }
        if(temp==1 and two>0)
        {
            one++;
            cnt.pb(two);
            two=0;
        }
        if(temp==2 and one>0)
        {
            cnt.pb(one);
            one=0;
            two++;
        }
    }
    if(one>0)
    cnt.pb(one);
    if(two>0)
    cnt.pb(two);
    int ans=0;
    for(int i=0;i<cnt.size()-1;i++)
    {
        int temp=min(cnt[i],cnt[i+1]);
        ans=max(ans,temp);
    }
    cout<<2*ans;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int T = 1;
    // cin >> T;
    while (T--)
    {
        cheems();
    }
}