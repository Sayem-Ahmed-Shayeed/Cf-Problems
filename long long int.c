#include<stdio.h>
int main()
{
    int n;
    int a, b ;
    int name[10000];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int count=0;
        scanf("%d %d",&a ,&b);
        int i=0;
        while(a%b!=0)
        {
            a=a+1;
            count++;
            i++;
        }
            name[i]=count;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d\n",name[i]);
    }






    return 0;
}
