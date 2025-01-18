#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int shokti[n];
        int lift[n];
        for(int i=0;i<n;i++)
        {
             scanf("%d %d",&shokti[i],&lift[i]);
        }
        int max=lift[0];
        int w=shokti[0];
        for(int i=1;i<n;i++)
        {
            if(lift[i]>max)
               {
                   max=lift[i];
                   w=shokti[i];
               }
        }
        if(w==shokti[0])
            w=w;
        else
            w+=1;
       for(int i=0;i<n;i++)
        {
            if(shokti[i]<w)
            {
                shokti[i]=-1;
            }
        }
        int ans=lift[0];
        if(shokti[0]==-1)
            ans++;
        for(int i=1;i<n;i++)
        {
            if(lift[i]>=ans && shokti[i]!=-1)
                ans++;
        }
        if(ans==lift[0])
            printf("%d\n",w);
        else
            printf("-1\n");
    }
}

