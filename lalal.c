#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int temp=n;
    int i=0;
    int count=0;
    while(temp!=0)
    {
        int a=temp%10;
        temp=temp/10;
        i++;
        if(a==4 || a==7)
            {
                count++;
            }
        else
        {
            count=count;
        }
    }
    if(count==i)
    {
        printf("YES");
    }
    else if(n%4==0)
    {
        printf("YES");
    }
    else if(n%7==0)
        printf("YES");
     else if(n%47==0)
        printf("YES");
     else if(n%74==0)
        printf("YES");
     else if(n%744==0)
        printf("YES");
     else if(n%447==0)
        printf("YES");
    else
        printf("NO");












    return 0;
}
