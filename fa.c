#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int n;
        scanf("%d",&n);
        int name[n];
        for(int j=0;j<n;j++)
        {
            scanf("%d",&name[j]);
        }
        int two=0;
        int one=0;
        for(int j=0;j<n;j++)
        {
            if(name[j]==2)
                two++;
            else
                one++;
        }
        if(one>0)
        {
            if(one%2==0)
                printf("YES\n");
            else
                printf("NO\n");
        }
        else if(one==0 && two>0)
        {
            if(two%2==0)
                printf("YES\n");
            else
                printf("NO\n");
        }
    }

    return 0;
}

