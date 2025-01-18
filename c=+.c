#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,n;
        scanf("%d %d %d",&a,&b,&n);
        int cnt=0;
        int i=0;
        while(1)
        {
            if(b<=a)
            {
                b+=a;
            }
            else
            {
                 a+=b;
            }
            if(b>n || a>n)
                break;
            else
                i++;
        }
        printf("%i\n",i+1);
    }
}
