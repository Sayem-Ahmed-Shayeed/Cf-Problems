#include<stdio.h>
int main()
{

    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int a, b, c;
        scanf("%d %d %d",&a,&b,&c);
        if(a > b + c)
            printf("First/n");
    else if(b > a + c)
        printf("Second\n");
    else if(c >= abs(a - b))
        printf("First\n");
    else
        printf("Second\n");
    }
}
