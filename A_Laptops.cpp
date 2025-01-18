/*

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
    int n;cin>>n;
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++)
    {
        int temp;cin>>temp;
        int temp2;cin>>temp2;
        v.pb(make_pair(temp,temp2));
    }
    sort(all(v));
    int flag=0;
    for(int i=0;i<n-1;i++)
    {
        if((v[i].first<v[i+1].first) and (v[i].second>v[i+1].second))
        {
            flag=1;
            break;
        }
    }
    if(flag)
    cout<<"Happy Alex";
    else 
    cout<<"Poor Alex";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    //cin >> t;
    while (t--)
    {
        cheems();
    }
}
