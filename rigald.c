#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        long long int shokti[n];
        long long int lift[n];
        for(int i=0;i<n;i++)
        {
             scanf("%lld %lld",&shokti[i],&lift[i]);
        }
        for(int i=1;i<n;i++)
        {
            if(lift[i]<lift[0])
            {
                lift[i]=-1;
                shokti[i]=-1;
            }
        }
        int sim=0;
        long long int w=shokti[0];
        for(int i=1;i<n;i++)
        {
            if(lift==-1)
                continue;
            else
            {
                 if(shokti[i]>=shokti[0])
            {
                sim++;
                break;
            }
            }
            }
            if(sim==0)
                printf("%lld\n",w);
            else
                printf("-1\n");

        }


    }


