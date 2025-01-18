#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {


    int x,k;
    scanf("%d %d",&x,&k);
    int ans;
    if(x%k!=0)
    {
        ans=1;
        printf("%d\n",ans);
        printf("%d",x);
    }
    if(x%k==0)
    {
        ans=2;
        printf("%d\n",ans);
        printf("%d 1",x-1);
    }
    printf("\n");
    }


}
