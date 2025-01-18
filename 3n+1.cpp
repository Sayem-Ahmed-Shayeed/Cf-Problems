#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long long int a,b;
    while(cin>>a>>b)
    {
        long long int mn,mx;
        if(a<b)
        {mn=a;
        mx=b;
        }
    else
    {
        mn=b;
        mx=a;
    }
    long int ans=0;
    for(int i=mn;i<=mx;i++)
    {
        int cnt=0;
        int temp=i;
        while(temp!=1)
        {
            if(temp%2==0)
            {
                cnt++;
                temp=temp/2;
            }
            else
                {
                    temp=(3*temp)+1;
                    cnt++;
                }
        }
        if(cnt>=ans)
            ans=cnt;
        else
            ans=ans;
    }
    cout<<a<<" "<<b<<" "<<ans+1<<endl;;
    }
return 0;
}
