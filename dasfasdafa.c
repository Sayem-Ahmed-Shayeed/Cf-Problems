#include<stdio.h>
int main()
{
    int a, b;
    int count=1;
    scanf("%d %d",&a,&b);
    int c=a;
    int rem=a%10;
    if(rem==b || rem==0)
    printf("1");
    else
    {
        while(1)
        {
            count=count+1;
            a=c*count;
            rem=a%10;
            if((rem==b) || (rem==0))
            {
                printf("%d",count);
                break;
            }
        }
    }



    return 0;
}
