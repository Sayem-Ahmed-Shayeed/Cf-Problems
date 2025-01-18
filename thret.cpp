
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int ans=0;
        int a,b,c;
        cin>>a>>b>>c;
        int min_val = min(a, min(b, c));
        if(a!=min_val)
        {
                  int dif=a-min_val;
        if(dif==0)
            ans+=0;
        else if(dif==min_val)
            ans+=1;
        else if(dif==(min_val*2))
            ans+=2;
       else if (dif==(min_val*3))
        ans+=3;
        /*else if(dif<min_val)
            ans+=1000;*/
            else
                ans+=1000;
        }

        //for b
        if(b!=min_val)
        {
             int dif2=b-min_val;
        if(dif2==0)
            ans+=0;
        else if(dif2==min_val)
            ans+=1;
        else if(dif2==(min_val*2))
            ans+=2;
        else if (dif2==(min_val*3))
        ans+=3;
        /*else if(dif2<min_val)
            ans+=1000;*/
            else
                ans+=1000;
        }

        //for c
        if(c!=min_val)
        {
             int dif3=c-min_val;
        if(dif3==0)
            ans+=0;
        else if(dif3==min_val)
            ans+=1;
        else if(dif3==(min_val*2))
            ans+=2;
        else if(dif3==(min_val*3))
            ans+=2;
        else
            ans+=1000;
        }
        if(ans<=3)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}

