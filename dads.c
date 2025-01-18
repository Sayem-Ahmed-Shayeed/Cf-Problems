
#include<stdio.h>
int main()
{
    float sum=0;
    int name[10];
        for(int j=0; j<10;j++)
        {
                scanf("%d",&name[j]);
        }
           for(int j=0; j<10;j++)
        {
                sum=sum+name[j];
        }
        printf("avg is =%.1f",sum/10);
}

