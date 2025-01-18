#include<bits/stdc++.h>
#define vint vector<int>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vint v(m);
    for(int i=0;i<m;i++){
        cin>>v[i];
    }
    long long ans=0;
    ans+=(v[false]-1);
    for(int i=1;i<m;i++){
        if(v[i]>=v[i-1]){
            ans+=(v[i]-v[i-1]);
        }
        else if(v[i]<v[i-1]){
            ans+=(n-v[i-1]);
            ans+=(v[i]-0);
        }
    }
    cout<<ans;
}