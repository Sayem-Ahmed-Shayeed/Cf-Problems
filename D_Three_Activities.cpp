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
#define vstring(v) vector<string> s;
using namespace std;
void contest()
{
    int n;
    cin >> n;
    vector<pair<ll, ll>> ski;
    vector<pair<ll, ll>> cinema;
    vector<pair<ll, ll>> games;

    for (int i = 0; i < n; i++)
    {
        ll temp;
        cin >> temp;
        ski.push_back(make_pair(temp, i));
    }
    sort(rall(ski));
    for (int i = 0; i < n; i++)
    {
        ll temp;
        cin >> temp;
        cinema.push_back(make_pair(temp, i));
    }
    sort(rall(cinema));
    for (int i = 0; i < n; i++)
    {
        ll temp;
        cin >> temp;
        games.push_back(make_pair(temp, i));
    }
    sort(rall(games));
    ll ans=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<3;k++)
            {
                if(ski[i].second!=cinema[j].second and cinema[j].second!=games[k].second and ski[i].second!=games[k].second)
                {
                    ans=max(ans,ski[i].first+cinema[j].first+games[k].first);
                }
            }
        }
    }
    cout<<ans<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        contest();
    }
}
