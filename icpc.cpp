#include<iostream>
#include<vector>
#include<cstdio>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    for(int k=1;k<=t;k++)
    {
        int cnt=0;
        int n;
        scanf("%d",&n);
        int a,b;
        scanf("%d %d",&a,&b);
        vector<int>name;
        for(int i=0;i<n;i++)
        {
            int temp;
            scanf("%d",&temp);
            name.push_back(temp);
        }
        int i=0;
        int  j=i+1;
        while(i!=n-1)
        {
            int dif=b-name[i];
            //cout<<i<<" "<<j<<endl;
            if(name[j]>dif )
            {
                j++;
                 if(j==n)
            {
                i++;
                j=i+1;
            }
                continue;
            }
            else
            {
            int temp=name[i]+name[j];
            cout<<temp<<endl;
            if((temp>=a ) && (temp<=b))
            {
                cnt++;
                //j++;
            }
            //j++;
            }
            j++;
             if(j==n)
            {
                i++;
                j=i+1;
            }
        }
        printf("Case %d: %d\n",k,cnt);
       //cout<<"Case "<<k<<": "<<cnt<<"\n";
    }
}
