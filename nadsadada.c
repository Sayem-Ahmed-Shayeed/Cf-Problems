#include<stdio.h>
#include<stdlib.h>
int main()
{
    char string[100001];
    scanf("%s",string);
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        int cnt=0;
        for(int i=a-1;i<=b-2;i++)
        {
            if(string[i]==string[i+1])
                cnt++;
            else
                continue;
        }
        printf("%d\n",cnt);
    }
}
