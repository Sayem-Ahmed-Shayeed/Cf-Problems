#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll cnt=1;
        while(cnt*2<=n){
            cnt*=2;
        }
        cout<<cnt<<endl;
        
    }
}