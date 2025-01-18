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
    int n;
    cin >> n;
    string s;
    cin >> s;
    string temp = s;
    reverse(all(temp));
    // cout<<temp<<" "<<s<<endl;
    if (temp == s)
    {
        yes;
    }
    if (n % 2 == 0)
    {
        int cnt = 0;
        string fst = "";
        string sec = "";
        for (int i = 0; i < n / 2; i++)
        {
            fst += s[i];
        }
        for (int i = n / 2; i < n; i++)
        {
            sec += s[i];
        }
        reverse(all(sec));
        int flag = 0;
        for (int i = 0; i < fst.size(); i++)
        {
            if (fst[i] != sec[i] and flag == 0)
            {
                flag = 1;
            }
            if (flag == 1 and fst[i] == sec[i])
            {
                flag = 0;
                cnt++;
            }
        }
        if (flag == 0)
        {
            if (cnt == 1)
                yes;
            else if (cnt > 1)
                no;
        }
        else if (flag == 1)
        {
            if (cnt == 0)
            {
                yes;
            }
            if (cnt >= 1)
                no;
        }
    }
    if (n % 2 == 1)
    {
        int cnt = 0;
        string fst = "";
        string sec = "";
        for (int i = 0; i < n / 2; i++)
        {
            fst += s[i];
        }
        for (int i = (n / 2) + 1; i < n; i++)
        {
            sec += s[i];
        }
        reverse(all(sec));
        int flag = 0;
        // cout<<fst<<" "<<sec<<endl;
        for (int i = 0; i < fst.size(); i++)
        {
            if (fst[i] != sec[i] and flag == 0)
            {
                flag = 1;
            }
            if (flag == 1 and fst[i] == sec[i])
            {
                flag = 0;
                cnt++;
            }
        }
        if (flag == 0)
        {
            if (cnt == 1)
                yes;
            else if (cnt > 1)
                no;
        }
        else if (flag == 1)
        {
            if (cnt == 0)
            {
                yes;
            }
            if (cnt >= 1)
                no;
        }
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