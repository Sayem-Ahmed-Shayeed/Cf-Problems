#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0; i<t; i++)
    {
       int n;
       int count=0;
       scanf("%d",&n);
       char name[n];
       scanf("%s",name);
       int ori[]={84,105,109,117,114};
       for(int j=0;j<5;j++)
          {
              for(int i=0;i<n;i++)
           {
               if(ori[j]==name[i])
               {count++;
               break;
               }
           }
          }
      if(count==5 && n==5)
        printf("YES\n");
       else
        printf("NO\n");

    }

    return 0;
}
