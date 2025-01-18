#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        char name[50];
        scanf("%s ",name);
        getchar();
        char c;
        scanf("%c",&c);
        int len=strlen(name);
        int i;
        for(i=0;i<len;i++)
        {
            if(c==name[i] && ((i+1)%2!=0))
               {
                   printf("YES\n");
                   break;
               }
        }
        if(i==len)
            printf("NO\n");

    }
}

