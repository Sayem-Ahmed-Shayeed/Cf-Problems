#include <bits/stdc++.h>
//_____________________

// #define i64 long long
// #define i32 int
#define str string
// #define v vector
// #define vi vector<int>
// #define vll vector<long long int>
#define vstr vector<str>
#define pb push_back
#define eb emplace_back
#define yes cout << "YES\n"
#define no cout << "NO\n"
//______________________

#define PI 3.14159265359
using namespace std;

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        vector<int> ans;
        ans.push_back(v[0] + 1);
        // for (int i = 0; i < n; i++)
        // {
        //     ans
        // }
        for (auto it : ans)
            cout << it << ' ';
        cout << endl;
    }
}