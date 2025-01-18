#include<stdio.h>
int neg=0;
int pos=0;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int name[n-1];
        for(int i=0;i<n-1;i++)
        {
               scanf(" %d",&name[i]);
        }
        for(int i=0;i<n-1;i++)
        {
            if(name[i]<0)
                neg+=name[i];
            else if(name[i]>=0)
                pos+=name[i];
        }
        printf("%d %d",pos ,neg);
    }
}

