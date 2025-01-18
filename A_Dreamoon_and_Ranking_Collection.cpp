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
    int n,x;
    cin>>n>>x;
    vint(v);
    for(int i=0;i<n;++i){
        int temp;
        cin>>temp;
        v.pb(temp);
    }
    sort(rall(v));
    int flag=0;
    for(int i=0;i<n;i++)
    {
        int missing=0;
        for(int j=1;j<=v[i];++j)
        {
            auto it=find(all(v),j);
            if(it==v.end())
            missing++;
        }
        if(missing<=x)
        {
            cout<<v[i]+(x-missing)<<endl;
            flag=1;
            break;
        }
        
    }
    if(flag==0)
    cout<<x<<endl;
    
}

int main()
{
    cout.tie(0);
int t;cin>>t;
while(t--)
    {
        cheems();
    }
    
}
