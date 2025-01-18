#include<stdio.h>
#include<string.h>
int main()
{
    char n[100000];
    scanf("%s",n);
    int zero=0;
    for(int i=0; i<strlen(n); i++)
    {
        if(n[i]=='0')
            zero++;
    }
    int one=0;
    if(zero>0)
    {
        for(int i=0; i<strlen(n); i++)
        {
             if(n[i]=='0')
            one++;
            if(n[i]=='0' && one==1)
                continue;
            else
                printf("%c",n[i]);
        }
    }
    else
    {
        for(int i=1; i<strlen(n); i++)
        {
                printf("%c",n[i]);
        }
    }

}
