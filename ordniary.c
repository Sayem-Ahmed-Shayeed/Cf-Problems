#include<stdio.h>
#include<math.h>
int main()
{
    int s,n;
    scanf("%d %d",&s,&n);
    int cnt=0;
    int dra[n];
    int bonus[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&dra[i],&bonus[i]);
    }
    int od[n];
    for(int i=0;i<n;i++)
    {
        od[i]=dra[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(dra[i]>dra[j])
            {
                int temp=dra[j];
                dra[j]=dra[i];
                dra[i]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        if(dra[i]<s)
        {
            for(int j=0;j<n;j++)
            {
                if(dra[i]==od[j])
                {
                    s+=bonus[j];
                    od[j]=-1;
                    cnt++;
                }
            }

        }
    }
    if(cnt==n)
        printf("YES\n");
    else
        printf("NO\n");
}

