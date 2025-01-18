#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int array[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&array[i]);
        }
        int min=array[0];
        for(int i=1;i<n;i++)
        {
            if(array[i]<min)
                min=array[i];
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            ans+=(array[i]-min);
        }
        printf("%d\n",ans);
    }
}
