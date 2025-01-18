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
#define pb push_back
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
#define Endl endl
using namespace std;
/* ____________________________G C D_______________________
   ___________E U C L I D I A N       T H E O R E M--________*/

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

/* __________________________ VOID CHEEMS ________________________*/

void cheems()
{
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    int mnm = min(min(a, b), c);
    if (n % mnm == 0)
        cout << n / mnm;
    else
    {
        vint v;
        if (n % a == 0)
        {
            v.pb(n / a);
        }
        if (n % b == 0)
        {
            v.pb(n / b);
        }
        if (n % c == 0)
        {
            v.pb(n / c);
        }
        int cnt = 0;
        if (n > a and n % a != 0)
        {
            int temp = n;
            int temp1 = n;
            int cnt = 0;
            int cnt1 = 0;
            int cnt3=0;
            int temp3=0;
            while (temp > a and temp % a != 0)
            {
                temp -= b;
                cnt++;
            }
            if (temp % a == 0)
            {
                cnt += (temp / a);
                v.pb(cnt);
                // cout<<"Temp:"<<temp<<endl;
                // cout<<"cnt:"<<cnt<<endl;
            }
            while (temp1 > a and temp1 % a != 0)
            {
                temp1 -= c;
                cnt1++;
            }
            if (temp1 % a == 0)
            {
                // cout<<"Temp1:"<<temp1<<endl;
                cnt1 += (temp1 / a);
                v.pb(cnt1);
                // cout<<"cnt1:"<<cnt1<<endl;
            }
             while (temp3 > a and temp3 % a != 0)
            {
                temp3 -= min(b,c);
                cnt3++;
            }
            if (temp % a == 0)
            {
                cnt3 += (temp3 / a);
                v.pb(cnt3);
                // cout<<"Temp:"<<temp<<endl;
                // cout<<"cnt:"<<cnt<<endl;
            }
        }
        // for b now
        if (n > b and n % b != 0)
        {
            int temp = n;
            int temp1 = n;
            int cnt = 0;
            int cnt1 = 0;
            int cnt3=0;int temp3=n;
            while (temp > b and temp % b != 0)
            {
                temp -= a;
                cnt++;
            }
           // cout<<"temp :"<<temp<<endl;
            if (temp % b == 0)
            {
                cnt += (temp / b);
                v.pb(cnt);
                //cout<<" for b Temp:"<<temp<<endl;
                //cout<<" for  b cnt:"<<cnt<<endl;
            }
            while (temp1 > b and temp1 % b != 0)
            {
                temp1 -= c;
                cnt1++;
            }
            if (temp1 % b == 0)
            {
                // cout<<"Temp1:"<<temp1<<endl;
                cnt1 += (temp1 / b);
                v.pb(cnt1);
                // cout<<"cnt1:"<<cnt1<<endl;
            }
             while (temp3 > b and temp3 % b != 0)
            {
                temp3 -= min(a,c);
                cnt3++;
            }
            if (temp3 % b == 0)
            {
                cnt3 += (temp3 / b);
                v.pb(cnt3);
                // cout<<"Temp:"<<temp<<endl;
                // cout<<"cnt:"<<cnt<<endl;
            }
        }
        // for c now
        if (n > c and n % c != 0)
        {
            int temp = n;
            int temp1 = n;
            int cnt = 0;
            int cnt1 = 0;
            int cnt3=0;
            int temp3=n;
            while (temp > c and temp % c != 0)
            {
                temp -= b;
                cnt++;
            }
            if (temp % c == 0)
            {
                cnt += (temp / c);
                v.pb(cnt);
                // cout<<"Temp:"<<temp<<endl;
                // cout<<"cnt:"<<cnt<<endl;
            }
            while (temp1 > c and temp1 % c != 0)
            {
                temp1 -= a;
                cnt1++;
            }
            if (temp1 % c == 0)
            {
                // cout<<"Temp1:"<<temp1<<endl;
                cnt1 += (temp1 / c);
                v.pb(cnt1);
                // cout<<"cnt1:"<<cnt1<<endl;
            }
             while (temp3 > c and temp3 % c != 0)
            {
                temp3 -= min(b,a);
                cnt3++;
            }
            if (temp3 % c == 0)
            {
                cnt3 += (temp3 / c);
                v.pb(cnt3);
                // cout<<"Temp:"<<temp<<endl;
                // cout<<"cnt:"<<cnt<<endl;
            }
        }
        cout<<mx_ele(v);
    }
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