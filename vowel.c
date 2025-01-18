#include<stdio.h>
#include<string.h>
int main()
{
    char st1[102];
    int len,i,c=0;
    char st2[102];
    scanf("%s",&st1);
    len=strlen(st1);
    for(i=0; i<len; i++)
    {
        if(st1[i]=='a' || st1[i]=='e' || st1[i]=='i'  || st1[i]=='o' || st1[i]=='u' || st1[i]=='y' )
        {
            st1[i]=st1[i+1];
        }
        else if(st1[i]=='A' || st1[i]=='E' || st1[i]=='I' || st1[i]=='O' || st1[i]=='U'|| st1[i]=='Y'  )
        {
            continue;
        }
       else
        {
            if( st1[i]>=65 &&  st1[i]<=90)
            {
                st1[i]=tolower(st1[i]);
            }
            printf(".%c",st1[i]);
        }

    }










    return 0;
}
