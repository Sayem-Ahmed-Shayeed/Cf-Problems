#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
    int max;
    int n,k,x;
    scanf ("%d %d %d",&n,&k,&x);
    int sum=0;
    if((k-1)>x)
        printf("-1\n");
    else
    {
        int i;
        for(i=0;i<k;i++)
        {
            sum+=i;
        }
        if(i>n)
            {
                printf("-1\n");
                continue;
            }
        int left=n-i;
        if(x!=k)
        {
            max=sum+(left*x);
        }
        else
        {
            max=sum+((x-1)*left);
        }
          printf("%d\n",max);
    }
    }

}
