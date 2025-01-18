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
    int n, x , a , y , b;
    cin>> n >>x >> a >>y >>b;
    int t=a+n;
    bool flag=false;
    while(true)
    {
        //cout << "x: " << x << ", y: " << y << endl;
        if(x==n)
            x=1;
        if(y==1)
            y=n;
        if(x==a or y==b)
            break;
        x++;y--;
        if(x==y)
        {
            flag=true;
            break;
        }
    }
    if(flag){
        yes;
    }
    else{
        no;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    contest();
}
