#include<stdio.h>
int main()
{
    int n,k;
    int name;
    int count=0;
    scanf("%d %d",&n,&k);
    if(k>(n/2)&& n%2==0)
    {
        for(int j=2; j<=n; j=j+2)
        {
            count++;
            if(count==k)
            {
                name=j;
                break;
            }
        }
               printf("%d",name);
}
if(k<=(n/2) && n%2==0)
    {
        for(int i=1; i<=n; i=i+2)
        {
            count++;
            if(count==k)
            {
                name=i;
                break;
            }
        }
               printf("%d",name);
}





    }

