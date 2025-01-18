#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        char name[n+1];
        scanf("%s",name);
        for(int i=0;i<(n-2);i++)
        {
            if(name[i]=='1')
            {
                name[i]='1';
                name[i+1]='0';
                name[i+2]='0';
            }
        }
        printf("%s\n",name);
    }
}
