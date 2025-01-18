#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter first and last number: ");
    scanf("%d %d",&a,&b);
    int i;
    for(i=a;i<=b;i++)
    {
        if(i%2==0)
            printf("%d\n",i);
    }
    return 0;
}
