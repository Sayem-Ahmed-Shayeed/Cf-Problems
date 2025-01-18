#include<stdio.h>
int main()
{
    int i;
    printf("Enter the first number: ");
    scanf("%d",&i);
    int n;
    printf("Enter the last number: ");
    scanf("%d",&n);
    int d;
    printf("Enter the difference you want : ");
    scanf("%d",&d);
body:
    if(i<=n)
    {
        printf("%d\n",i);
        i+=d;
        goto body;
    }
    printf("Reached at %d.",n);
    return 0;
}
