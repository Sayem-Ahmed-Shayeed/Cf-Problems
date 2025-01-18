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
    string s, s1;
    cin >> s >> s1;
    int vowel1 = 0;
    int cons1 = 0;
    int vowel2 = 0;
    int cons2 = 0;
    for (auto x : s)
    {
        if (x == 'a' or x == 'e' or x == 'i' or x == 'o' or x == 'u')
        {
            vowel1 += true;
        }
        else
        {
            cons1 += true;
        }
    }
    for (auto x : s1)
    {
        if (x == 'a' or x == 'e' or x == 'i' or x == 'o' or x == 'u')
        {
            vowel2 += true;
        }
        else
        {
            cons2 += true;
        }
    }
    if (vowel1 == vowel2 and cons1 == cons2)
        yes;
    else
        no;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        cheems();
    }
}