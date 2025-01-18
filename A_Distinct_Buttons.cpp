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
    int n;
    cin >> n;
    int x=0;int y=0;
    int left=0;int right=0;int up=0;int down=0;
    for (int i = 0; i < n; i++)
    {
        int temp, temp2;
        cin >> temp >> temp2;
        if(temp>x)
        right=1;
        if(temp<x)
        left=1;
        if(temp2>x)
        up=1;
        if(temp2<x)
        down=1;
    }
     if(left+right+up+down==4)
        no;
        else
        yes;
}

int main()
{
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        cheems();
    }
}
