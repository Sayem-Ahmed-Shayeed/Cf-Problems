#include<stdio.h>
#include<string.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    char name[n+1][m+1];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf(" %c",&name[i][j]);
        }
    }
    int count=0;
      for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(name[i][j]=='C' || name[i][j]=='M' || name[i][j]=='Y')
                count++;
            else
                count=count;
        }
    }
    if(count>0)
        printf("#Color");
    else
        printf("#Black&White");
}
