#include<stdio.h>
int main()
{
    int i;
    printf("Enter the first number: ");
    scanf("%d",&i);
    int j=i;
    int n;
    printf("Enter the last number: ");
    scanf("%d",&n);
    int d;
    printf("Enter the difference : ");
    scanf("%d",&d);
   do
    {
        printf("%d\n",j);
        j+=d;
    } while(j<=n);
    return 0;
}
