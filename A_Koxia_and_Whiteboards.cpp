#include<bits/stdc++.h>
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define pb push_back
#define ll long long int
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define mx_ele(v) *max_element(v.begin(),v.end())
#define mnm_ele(v) *min_element(v.begin(),v.end())
#define endl "\n"
using namespace std;
void smile()
{
    int n,m;
    cin>>n>>m;
    vector<ll>v1,v2;
    for(int i=0; i<n; i++)
    {
        ll temp;
        cin>>temp;
        v1.pb(temp);
    }
    for(int i=0; i<m; i++)
    {
        ll temp;
        cin>>temp;
        v2.pb(temp);
    }
        for (int i = 0; i < m; i++)
    {
        sort(all(v1));
        v1[0] = v2[i];
    }
    ll ans=0;
    for(int i=0;i<n;i++)
    {
        ans+=v1[i];
    }
    cout<<ans<<endl;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    cin>>t;
    while(t--)
    {
        smile();
    }

}
    


    int mini = abs(a[1] - a[n]);
    int i1 = n, i2 = 1;
    for(int i = 1; i <= n; i++){
        int k = abs(a[i] - a[i+1]);
        if(k < mini){
            mini = k;
            i1 = i;
            i2 = i+1;
        }
    }
    cout<<i1<<" "<<i2<<endl;