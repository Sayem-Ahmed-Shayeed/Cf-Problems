#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t;
    cin>>t;
    while(t--)
    {
        int ans=0;
        int a,b,c;
        cin>>a>>b>>c;
        long long int min_val = min(a, min(b, c));
        long long  dif=a-min_val;
        if(dif==0)
            ans+=0;
        else if(dif==min_val)
            ans+=1;
        else if(dif==(min_val*2))
            ans+=2;
        else if (dif==(min_val*3))
        ans+=3;
        else if((dif<min_val) ||(dif >min_val*3))
            ans+=1000;
        //for b
        long long int dif2=b-min_val;
        if(dif2==0)
            ans+=0;
        else if(dif2==min_val)
            ans+=1;
        else if(dif2==(min_val*2))
            ans+=2;
        else if (dif2==(min_val*3))
        ans+=3;
             else if((dif2<min_val) ||(dif2>min_val*3))
            ans+=1000;

        //for c
        long long int dif3=c-min_val;
        if(dif3==0)
            ans+=0;
        else if(dif3==min_val)
            ans+=1;
        else if(dif3==(min_val*2))
            ans+=2;
        else if (dif3==(min_val*3))
        ans+=3;
        else if((dif3<min_val) ||(dif3>min_val*3))
            ans+=1000;
        if(ans<=3)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
