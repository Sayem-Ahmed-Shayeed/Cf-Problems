#include<stdio.h>
int main()
{
    int start,end,dif;
    printf("where to start ?\n>>enter starting point : ");
        scanf("%d",&start);
     printf("where to end?\n>>enter ending point  : ");
         scanf("%d",&end);
      printf("what is the difference ?\n>>enter  difference : ");
          scanf("%d",&dif);

    int i=start;
    while(i<=end)
    {
        printf("%d\v",i);
        i=i+dif;
    }







}
