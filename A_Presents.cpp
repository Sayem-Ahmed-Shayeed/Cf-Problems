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
    ans+=(v[0]-1);
    cout<<ans<<endl;
    for(int i=1;i<n;i++){

    }
}