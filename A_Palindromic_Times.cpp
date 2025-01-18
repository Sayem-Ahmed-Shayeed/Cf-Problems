#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string her;
    cin>>her;

    string him="";
    for(auto it:her){
        him+=it;
    }
    cout<<him<<endl;
}