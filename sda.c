#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int num;
        scanf("%d",&num);
        int mid=num/2;
        int j=1;
        int bc=0;
        int name[(num/2)+1];
        for(int i=(num-(num/2)+1);i<=num;i++)
        {
            int temp=i-j;
            int count=0;
            for(int k=1;k<=temp;k++)
                {
                    if(temp%k==0)
                        count++;
                }
                if(count==2)
                    name[j]=i;
                if(count!=2)
                    {bc++;
                    break;}
                j++;

        }

        for(int i=1;i<(num-(num/2)+1);i++)
        {
            name[j]=i;
            j++;
        }
        if(bc>0)
            printf("-1");
        else
        {
            for(int i=1;i<j;i++)
                printf("%d ",name[i]);
        }
        printf("\n");
    }
}
