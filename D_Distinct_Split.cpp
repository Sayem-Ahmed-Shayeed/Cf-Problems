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
    int n;
    cin >> n;
    string s;
    cin >> s;
    string ans1 = "";
    string ans2 = "";
    if (n % 2 == 0)
    {
        for (int i = 0; i < n / 2 - 1; i++)
        {
            ans1 += s[i];
        }
        for (int i = n / 2 - 1; i < n; i++)
        {
            ans2 += s[i];
        }
    }
    else
    {
        for (int i = 0; i < n / 2; i++)
        {
            ans1 += s[i];
        }
        for (int i = n / 2; i < n; i++)
        {
            ans2 += s[i];
        }
    }
    map<char, int> v1, v2;
    for (int i = 0; i < ans1.size(); i++)
    {
        if (v1.find(ans1[i]) == v1.end())
        {
            v1[ans1[i]] = 1;
        }
        else
        {
            v1[ans1[i]]++;
        }
    }
    for (int i = 0; i < ans2.size(); i++)
    {
        if (v2.find(ans2[i]) == v2.end())
        {
            v2[ans2[i]] = 1;
        }
        else
        {
            v2[ans2[i]]++;
        }
    }
    cout << v1.size() + v2.size() << endl;
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
