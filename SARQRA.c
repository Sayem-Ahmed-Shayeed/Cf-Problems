#include<stdio.h>
#include<stdlib.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        long long int n ;
        scanf("%lld",&n);
        long long int count=0;
        if(n%2==0)
        {
            long long int c1;
            long long int c2;
            int small=1000000000;
            int name[n];
            for(long long int j=2;j<n/4;j=j+2)
            {
                c1=j;
                c2=(n-c1)/2;
                name[count]=abs(c2-c1);
                count++;
            }
            printf("%lld ",count);

        }

    }
}
