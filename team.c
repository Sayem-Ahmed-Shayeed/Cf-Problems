#include <stdio.h>
#include <string.h>

int main()
{
    int i, n;
    int x=0;
    scanf("%d", &n);

    for(i=0; i< n ; i++)
    {
         char name [4];
         scanf("%s",name);
         if(name[1]=='+')
         {
             x++;
         }
         else
         {
             x--;
         }
    }
    printf("%d",x);


    return 0;

}


