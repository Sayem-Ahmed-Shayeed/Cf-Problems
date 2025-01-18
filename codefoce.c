#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int name[a];
    for(int i=1; i<=a; i++)
    {
        scanf("%d",&name[i]);
    }
    int small=0;
    for(int i=1; i<=b; i++)
    {
        small=small+name[i];
    }
    int ar[a-(b-1)];
    ar[1]=small;
    int sum=small;
    for(int j=2; j<=a-(b-1); j++)
    {
        sum=sum+name[j];

        ar[j]=sum;
        if(small>sum)
            small=sum;
        else
            small=small;
    }

    /*int small=ar[1];
    for(int i=2; i<=a-(b-1); i++)
    {
        if(small>ar[i])
            small=ar[i];
        else
            small=small;
    }*/
    for(int i=1; i<=a-(b-1); i++)
    {
        if(ar[i]==small)
        {
            printf("%d",i);
            break ;
        }
    }
    //  }
}
