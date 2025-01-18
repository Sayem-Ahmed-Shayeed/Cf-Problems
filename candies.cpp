#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long int t ;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long sum=0;
        for(int i=1;i<30;i++ )
        {
            int temp=pow(2,(i-1));
            sum+=temp;
            if(n%sum==0 && i>1 && (n%(n/sum)==0))
            {
                long long ans=n/sum;
                cout<<ans<<endl;
                break;
            }

        }
    }
}
