#include<stdio.h>
int main()
{
    long long int t;
    scanf("%lld",&t);
    for(int i=0;i<t;i++)
    {
        long int a;
        scanf("%ld",&a);
        int name[a];
        for(int j=0;j<a;j++)
        {
            scanf("%lld",&name[j]);
        }
        if(name[0]==a)
            {printf("YES\n");
            }
        else
            printf("NO\n");
        }
    return 0;
    }




