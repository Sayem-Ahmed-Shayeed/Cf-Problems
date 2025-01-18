#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int name[n];
    int f=0;
    int name1[100];
    int i;
    int j;
    int p;
    scanf("%d",&p);
    //first line input
    for(i=0; i<p; i++)
    {
        scanf("%d",&name[i]);
    }
    //2nd line

    int q;
    scanf("%d",&q);
    for( i=p; i<p+q; i++)
    {
        scanf("%d",&name[i]);
    }

//n=1, 2 3, 4;
    for(int i=1; i<=n; i++)
    {
        name1[i]=i;
    }

    //compare
      for(int i=1; i<=n; i++)
    {
        int count=0;
           if(count==1)
        {
            break;
        }
        for(int  j=0; j<p+q;j++)
        {
            if(name1[i]==name[j])
                count++;
            else
                f++;
        }
    }
    printf("%d",f);



    return 0;
}
