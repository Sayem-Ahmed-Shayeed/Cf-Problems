#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int temp=n;
    int mid=n/2;
    int count=0;
    for(int i=mid;i>=1;i--)
    {
        int var=temp-i;
        if(var%i==0)
            count++;
    }
        printf("%d",count);
}
