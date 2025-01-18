/* ELVISH BHAI K AGE KOYI
   KUCH BOLSAKTA HAIN KYA  */
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
#define vint(v) vector<int> v;
#define vll(v) vector<long long int> v;
#define vstring(s) vector<string> s;
using namespace std;
void cheems()
{
    string s1, s2, s3;
    getline(cin,s1);
    getline(cin,s2);
    getline(cin,s3);
    int cnt1 = 0;
    int cnt2 = 0;
    int cnt3 = 0;
    for (auto x : s1)
    {
        if (x == 'a' or x == 'e' or x == 'i' or x == 'o' or x == 'u')
            cnt1++;
    }
    if (cnt1 == 5)
    {
        for (auto y : s2)
        {
            if (y == 'a' or y == 'e' or y == 'i' or y == 'o' or y == 'u')
                cnt2++;
        }
        if (cnt2 == 7)
        {
            for (auto z : s3)
            {
                if (z == 'a' or z == 'e' or z == 'i' or z == 'o' or z == 'u')
                    cnt3++;
            }
            if (cnt3 == 5)
            {
                yes;
            }
            else
                no;
        }
        else
            no;
    }
    else
    {
        no;
    }
  
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cheems();
}
