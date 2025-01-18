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
    string s;
    cin >> s;
    int k;
    cin >> k;
    int n = s.size();
    if (k > n)
        cout << "impossible";
    else
    {
        sort(s.begin(), s.end());
        //cout<<s<<endl;
        int unqcnt=unique(s.begin(), s.end()) - s.begin();
        if(unqcnt>=k)
        cout<<0;
        else
        cout << k-unqcnt;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cheems();
}
