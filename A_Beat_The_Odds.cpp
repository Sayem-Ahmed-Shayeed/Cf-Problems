/* ELVISH BHAI K AGE KOYI
   KUCH BOLSAKTA HAIN KYA  */
#include <bits/stdc++.h>
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
    int n;
    cin>>n;
    int even_cnt=0;
    int odd_cnt=0;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        if(temp%2==0)even_cnt++;
        else odd_cnt++;
    }
    //cout<<even_cnt<<" "<<odd_cnt<<endl; 
    cout<<min(even_cnt,odd_cnt)<<endl;
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    cin>>t;
    while(t--){
         cheems();

    }
   
}
