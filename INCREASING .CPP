#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int cnt=0;
        long long n;
        cin>>n;
        long long int name [n];
        for(long long int i=0;i<n;i++)
        {
            cin>>name[i];
        }
        for(long long int i=0;i<n-1;i++)
        {
            for(long long int j=i+1;j<n;j++)
            {
                if(name[i]==name[j])
                {
                    cnt++;
                    break;
                }
            }
        }
        if(cnt!=0)
            cout<<"NO"<<"\n";
        else
            cout<<"YES"<<"\n";
    }
}
