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
#define vint vector<int>
#define vll vector<long long int>
#define vstring vector<string>
#define pint vector<pair<int ,int>>
#define pll vector<pair<ll ,ll>>
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

/* ______________________VOID CHEEMS________________________*/
void cheems()
{
    int n,k;
    cin>>n>>k;
    ll product=1;
    for(int i=0;i<n;i++)
    {
        ll temp;cin>>temp;
        product*=temp;
    }
    if(red_flag%product==0)
    {
        yes;
        ll green_flag=red_flag/product;
        cout<<green_flag<<" ";
        k--;
        while(k--)
        {
            cout<<1<<" ";
        }
        cout<<endl;
    }
    else if(red_flag%product!=0)
    {
        no;
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
