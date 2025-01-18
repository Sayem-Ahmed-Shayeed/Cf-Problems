#include <bits/stdc++.h>
#define int long long
#define ll long long
#define ull unsigned long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define max_ele(v) *max_element(v.begin(), v.end())
#define min_ele(v) *min_element(v.begin(), v.end())
#define SORT(v) sort(v.begin(), v.end())
#define REVERSE(v) reverse(v.begin(), v.end())
#define REV_SORT(v) sort((v).begin(), (v).end(), greater<>())
#define all(v) v.begin(), v.end()
#define vint vector<int>
#define u_set unordered_set
#define u_map unordered_map
#define setbit(x) __builtin_popcount(x)
#define lead_zero(x) __builtin_clz(x)
#define trail_zero(x) __builtin_ctz(x)
#define coutall(v)      \
    for (auto &&it : v) \
    cout << it << " "
#define coutnl(v)       \
    for (auto &&it : v) \
    cout << it << '\n'
#define cinall(v)       \
    for (auto &&it : v) \
    cin >> it
#define cin2d(v)                   \
    for (auto &&row : v)           \
        for (auto &&element : row) \
            cin >> element;
#define cout2d(v)                       \
    for (const auto &row : v)           \
    {                                   \
        for (const auto &element : row) \
            cout << element << ' ';     \
        cout << '\n';                   \
    }
#define nl cout << '\n';
using namespace std;
int cerrr = 1;
#define err cerr << "Thats GFG! " << cerrr++ << '\n'
const ll Inf = 0x3fffffffffffffff;
const int mod = 0x3b9aca07;

void debug_mode()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif
}

void solve();
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // debug_mode();
    int TestCase = 1;
    // cin >> TestCase;
    int case_no = 1;
    while (TestCase--)
    {
        // cout << "Case " << case_no++ << ": ";
        solve();
        // cout << '\n';
    }
    return 0;
}

void solve()
{
    string st1="abcdef";
    string st2="ayced";
    int met[st2.size()+1][st1.size()+1];

    for(int i=0;i<st2.size()+1;i++){
        for(int j=0;j<st1.size()+1;j++){
            if(i==0){
                met[i][j]=j;
            }else if(j==0){
                met[i][j]=i;
            }else{
                met[i][j]=0;
            }
        }
    }

     for(int i=0;i<st2.size()+1;i++){
        for(int j=0;j<st1.size()+1;j++){
            cout<< met[i][j]<<' ';
        }
        cout<<endl;
    }


    for(int i=1;i<st2.size()+1;i++){
        for(int j=1;j<st1.size()+1;j++){
            if(st1[j-1]==st2[i-1]){
                met[i][j]=met[i-1][j-1];
            }else{
                met[i][j]=1+min(min(met[i-1][j-1],met[i][j-1]),met[i-1][j]);
            }
        }
    }

    cout<<endl;
         for(int i=0;i<st2.size()+1;i++){
        for(int j=0;j<st1.size()+1;j++){
            cout<< met[i][j]<<' ';
        }
        cout<<endl;
    }

    //trace back code
    string res="";
    int i=st2.size();
    int j=st1.size();
    while(i>0 and j>0){
        if(st1[j-1]==st2[i-1]){
                res+='N';
            i--;j--;
        }else{
            int minimum=min(min(met[i-1][j-1],met[i][j-1]),met[i-1][j]);
            if(met[i-1][j-1]==minimum){
                res+='U';
                i--;
                j--;
            }else if(met[i][j-1]==minimum){
                res+='D';
                j--;
            }else if(met[i-1][j]==minimum){
                res+='I';
                i--;
            }
        }
    }


    cout<<"Trace back  operation on st1: ";
    reverse(all(res));
    for(auto it:res){
        cout<<it;
    }
}