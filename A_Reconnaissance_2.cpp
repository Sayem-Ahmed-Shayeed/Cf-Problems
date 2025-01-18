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
    int n;
    cin>>n;
    int v[n+1];
    for(int i=1; i<=n; i++)
    {
        cin>>v[i];
    }
    int mini = abs(v[1] - v[n]);
    int i1 = n, i2 = 1;
    for(int i = 1; i <n; i++)
    {
        int k = abs(v[i] - v[i+1]);
        if(k < mini)
        {
            mini = k;
            i1 = i;
            i2 = i+1;
        }
    }
    cout<<i1<<" "<<i2<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    //cin>>t;
    while(t--)
    {
        smile();
    }

}
