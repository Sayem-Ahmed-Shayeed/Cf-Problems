#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        if(n<9)
            printf("0\n");
        if(n==9)
            printf("1\n");
        else if(n>9)
        {
            int rem=n%10;
            int ans=n/10;
            if(rem<9)
                printf("%d\n",ans);
            else if(rem==9)
            printf("%d\n",ans+1);

        }
    }
}






