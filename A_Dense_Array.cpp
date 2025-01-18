#include <bits/stdc++.h>
#include <map>
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
#define vstring(v) vector<string> s;
using namespace std;
void contest()
{
    int n;
    cin >> n;
    vint(v);
    for (int i = 0; i < n; ++i)
    {
        int temp;
        cin >> temp;
        v.pb(temp);
    }
   // int flag = 0;
    int mv = 0;
    for (int i = 0; i < n - 1; i++)
    {

        if (max(v[i], v[i + 1])<=min(v[i], v[i + 1])*2)
            continue;
        else
        {
            //flag = 1;
            if (v[i + 1] > v[i])
            {
                int j = v[i];
                int bound=v[i+1]/2;
                if(v[i+1]%2!=0)bound++;
                while (j<bound)
                {
                    j *= 2;
                    mv++;
                }
                //cout<<"index: "<<v[i]<<"and  mv: "<< mv<<endl;
            }
            else if(v[i+1]<v[i])
            {
                int k =v[i+1];
                int bound=(v[i]/2);
                if(v[i]%2!=0)
                bound++;
                while (k<bound)
                {
                    k *= 2;
                    mv++;
                }
                //cout<<"index: "<<v[i] <<"and  mv: "<< mv<<endl;
            }
        }
    }
    
    cout<<mv<<endl;
}

int main()
{
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        contest();
    }
}


