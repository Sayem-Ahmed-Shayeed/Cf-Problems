#include<stdio.h>
int main()
{
    int r;
    int col;
    printf("Number of lines you want : ");
    scanf("%d",&r);
    int i,j;
    for(i=0;i<r+1;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("# ");
        }
        printf("\n");
    }
return 0;
}
