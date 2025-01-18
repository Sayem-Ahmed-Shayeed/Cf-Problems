#include<stdio.h>
#include<string.h>
int main()
{

    int n ;
    int count=0;
    scanf("%d",&n);
    char s[n+1];
    for(int i=0; i<=n; i++)
        scanf("%c",&s[i]);
    for(int i=97; i<123; i++)
    {
        for( int j=1; j<=n; j++)
        {
            s[j]=tolower(s[j]);
            if(i==s[j])
            {
                count++;
                break;
            }
            else
                continue;
        }
    }
    if(count==26)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

}












