#include<stdio.h>
int main()
{
    int  a, b,count=0,count1=0 ;
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        a=a-b;
        count=count+b;
        count1=(a/2);
    }
    else if(b>a)
    {
        b=b-a;
        count=count+a;
        count1=(b/2);

    }
    else
        count=count+a;

    printf("%d ",count);
    printf("%d",count1);

}
