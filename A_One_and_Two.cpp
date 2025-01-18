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
    vint(v);
    int two_cnt=0;
    for(int i=0;i<n;i++)
    {
        int temp;cin>>temp;
        v.pb(temp);
        if(temp==2)
        two_cnt++;
    }
    if(two_cnt%2!=0)
    cout<<"-1\n";
    else if(two_cnt%2==0 and two_cnt>0)
    {
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(v[i]==2)
            cnt++;
            if(cnt==two_cnt/2)
            {
                cout<<i+1<<endl;
                break;
            }
        }
    }
    else if(two_cnt==0)
    cout<<1<<endl;
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
