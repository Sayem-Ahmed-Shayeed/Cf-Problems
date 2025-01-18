#include<stdio.h>
int main()
{
    int a;
    int count=0;
    scanf("%d",&a);
    int i=0;
    int rem;
    rem=a%10;
    printf("%d",rem);
    /*while(a!=0)
    {
        rem=a%10;
        printf("%d",rem);
       if((rem==4) || (rem==7))
        {
            count++;
        }
        i++;
    }
   if((count==7) || (count==4))
        printf("YES");
    else
        printf("NO");*/


    return 0;
}
