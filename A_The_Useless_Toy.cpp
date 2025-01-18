#include <bits/stdc++.h>
#include <map>
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
    char a, b;
    cin >> a >> b;
    int n;
    cin >> n;
    int start = a;
    int end = b;
    if (n % 2 == 0)
    {
        cout << "undefined";
    }
    if (n % 2 != 0)
    {
        int temp = n / 2 + 1;
        if (temp % 2 != 0)
        {
            if (start == 118)
            {
                if (end == 60)
                    cout << "cw";
                else if (end == 62)
                    cout << "ccw";
                else
                    cout << "undefined";
            }
            else if (start == 60)
            {
                if (end == 94)
                    cout << "cw";
                else if (end == 118)
                    cout << "ccw";
                else
                    cout << "undefined";
            }
            else if (start == 94)
            {
                if (end == 62)
                    cout << "cw";
                else if (end == 60)
                    cout << "ccw";
                else
                    cout << "undefined";
            }
            else if (start == 62)
            {
                if (end == 118)
                    cout << "cw";
                else if (end == 94)
                    cout << "ccw";
                else
                    cout << "undefined";
            }
        }
        else if (temp % 2 == 0)
        {
            if (start == 118)
            {
                if (end == 62)
                    cout << "cw";
                else if (end == 60)
                    cout << "ccw";
                else
                    cout << "undefined";
            }
            else if (start == 60)
            {
                if (end == 118)
                    cout << "cw";
                else if (end == 94)
                    cout << "ccw";
                else
                    cout << "undefined";
            }
            else if (start == 94)
            {
                if (end == 60)
                    cout << "cw";
                else if (end == 62)
                    cout << "ccw";
                else
                    cout << "undefined";
            }
            else if (start == 62)
            {
                if (end == 94)
                    cout << "cw";
                else if (end == 118)
                    cout << "ccw";
                else
                    cout << "undefined";
            }
        }
    }
}

int main()
{
    cout.tie(0);
    cheems();
}
