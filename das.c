#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a, b,c;
        int max;
        int min;
        scanf("%d %d %d",&a,&b,&c);
        if(a>b)
        {max=a;
        min=b;
        }
        else
            {max=b;
            min=a;
            }
        int dif=abs(a-b);
        int cir=2*dif;
        int ans1=c-dif;
        int ans2=c+dif;
        if(max>cir || c>cir || ans1==min || ans2==max)
            printf("-1\n");
        else
        {
            if(ans1>0)
                printf("%d\n",ans1);
            else if(ans2<=cir)
                printf("%d\n",ans2);
            else
                printf("-1\n");
        }
    }
}
