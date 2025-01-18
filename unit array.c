
/*         LESS THAN ZERO        */
#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;cin>>n;
        vector<int>v;
        int sum=0;
        int mul=1;
        int op=0;
        for(int i=0;i<n;i++)
        {
            int temp;cin>>temp;
            v.push_back(temp);
            sum+=temp;
            mul*=temp;
        }
        if((sum>=0) && (mul==1))
        cout<<"0\n";
        else
        {
            int flag=0;
            sort(v.begin(),v.end());
            for(int i=0;i<n;i++)
            {
                if(v[i]==-1)
                {
                    sum+=2;
                    mul*=(-1);
                    op++;
                    if((sum>=0) && (mul==1))
                       {
                           flag=1;
                           break;
                       }
                }
            }
            if(((sum>=0) && (mul==1)) || (flag==1))
                cout<<op<<endl;

        }
    }
}
