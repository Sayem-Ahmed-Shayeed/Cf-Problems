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
    ll n;
    cin>>n;
    if(n%10!=0)
    cout<<"-1\n";
    else
    {
        ll cnt=0;
        while(n>0)
        {
            string s=to_string(n);
            int size=s.size();
            ll ten=1;
            for(int i=1;i<=(size-4);i++)
            {
                ten*=10;
            }
            //cout<<"Ten :"<<ten<<endl;
            ll temp=2050*ten;
            //cout<<temp<<endl;
            if(n%temp==0)
            {
                cnt++;
                n=0;
            }
            else
            {
                cnt++;
                n-=2050;
            }
        }
           

    }
    
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
