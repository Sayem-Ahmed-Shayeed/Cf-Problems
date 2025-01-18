#include <stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0; i<t; i++)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        getchar();
        char name[a+1];
        scanf("%c",name);
        for(int k=0;k<a;k++)
        {
            printf("%c ",name[k]);
        }
      /*  int temp;
           for(int i=0;i<a-1;i++)
        {
            for(int j=i+1;j<a-1;j++)
            {
                if(name[i]>name[j])
                {
                    temp=name[j];
                    name[j]=name[i];
                    name[i]=temp;
                }
            }
        }
         for(int i=0;i<a-1;i++)
        {
            printf("%c\n",name[i]);
        }*/
    }

    return 0;
}
