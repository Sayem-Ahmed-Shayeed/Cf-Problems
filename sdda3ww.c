
#include<stdio.h>
int main()
{
    int name[2][3];
        for(int j=0; j<2;j++)
        {
            for(int k=0; k<3; k++)
            {
                scanf("%d",&name[j][k]);
            }
        }
           for(int j=0; j<2;j++)
        {
            for(int k=0; k<3; k++)
            {
                printf("%d ",name[j][k]);
            }
            printf("\n");
        }
}
