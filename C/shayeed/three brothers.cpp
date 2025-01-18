#include<bits/stdc++.h>
using namespace std;
int alternating_sum(){
    long long int a,b;
    cin>>a>>b;
    long long mid_diff=1;
    long long int res=0;
    long long int cnt=a;
    while(cnt<=b){
        cnt+=mid_diff;
        res++;
        mid_diff++;
    }
    return res;
}
int main(){
    int  t;
    cin>>t;
    while(t--) {
         cout<<alternating_sum()<<'\n';
    }
}

