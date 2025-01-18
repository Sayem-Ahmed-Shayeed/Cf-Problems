/*  :: LESS THAN ZERO ::   */
#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        vector<long long int>seq;
        for(long long int i=0; i<n; i++)
        {
            long long int temp;
            cin>>temp;
            seq.push_back(temp);
        }
        long long ans = seq[0]-1;
        for (int i = 0; i < n - 1; i++)
        {
            if ((seq[i + 1] - seq[i]) > 0)
                ans+=(seq[i + 1]-seq[i]);
        }
        cout <<ans<< endl;
    }
}
