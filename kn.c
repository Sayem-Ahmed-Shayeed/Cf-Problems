#include<stdio.h>
int main()
{
    int n;
    int b,d,c,large;
    scanf("%d",&n);
    int a=n;
    if(a>0)
    {
        b=a/10;
        d=a/100;
        c;
        if(a%10==0)
            c=d*10;
        else
            c=d*10+(a%10);

        large=a;
        if(large<b)
            large=b;
        if(large<c)
            large=c;
        else
            large=large;

    }
    else if(a<0)
    {
        int a=n*(-1);
        b=a/10;
        d=a/100;
        c;
        if(a%10==0)
            c=d*10;
        else
            c=d*10+(a%10);

        large=a;
        if(large>b)
            large=b;
        if(large>c)
            large=c;
        else
            large=large;

    large=(-1)*large;

    }
    printf("%d",large);

}

