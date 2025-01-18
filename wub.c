#include<stdio.h>
#include<string.h>
int main()
{
    char name[201];
    int count=0;
    char s[201];
    scanf("%s",name);
    int l=strlen(name);
    for(int i=0; i<l; i++)
    {
        if(name[i]=='W')
        {
            if(name[i+1]=='U' && name[i+2]=='B')
              {
                count++;
              }
            else
                printf("%c",name[i]);
        }
        else if(name[i]=='U')
        {
            if(name[i-1]=='W' && name[i+1]=='B')
                count++;
            else
                printf("%c",name[i]);
        }
        else  if(name[i]=='B')
        {
            if(name[i-2]=='W' && name[i-1]=='U')
                {count++;
                printf(" ");}
            else
                printf("%c",name[i]);
        }

        else
        {
            printf("%c",name[i]);
        }
    }

}
