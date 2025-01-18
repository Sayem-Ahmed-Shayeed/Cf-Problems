#include<bits/stdc++.h>
#include<map>
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define pb push_back
#define ll long long int
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define mx_ele(v) *max_element(v.begin(),v.end())
#define mnm_ele(v) *min_element(v.begin(),v.end())
#define endl "\n"
#define vint vector<int>v;
#define vll vector<long long int>v;
#define vstring vector<string>s;
using namespace std;
void contest()
{
    string s;
    cin>>s;
    int one_cnt=0;
    int zero_cnt=0;
    for(auto x:s){
        if(x=='1')
        one_cnt+=true;
        else
        zero_cnt+=true;
    }
    ll mnm_cst=s.size();
    for(auto x:s){
        if(x=='1')
        {
            if(zero_cnt>0)
            {
                zero_cnt--;
                mnm_cst--;
            }
            else
            break;

        }
        else 
        {
            if(one_cnt>0){
                one_cnt--;
                mnm_cst--;
        
            }
            else
            break;
        }
    }
    cout<<mnm_cst<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        contest();
    }
}
