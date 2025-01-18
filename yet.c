#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int count=0;
        int a;
        scanf("%d",&a);
        int name[a];
        for(int i=1;i<=a;i++)
        {
            scanf("%d",&name[i]);
        }
         for(int i=1;i<=a;i++)
        {
            if(i==name[i])
            {
                count++;
            }
            else
                count=count;
        }
       if(count<=1)
            printf("%d\n",count);
        else
        {if(count%2!=0)
            printf("%d\n",(count/2)+1);
        else
            printf("%d\n",count/2);
    }

}}
