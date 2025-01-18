#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    int k;
    k=0;
    int num=18;
    while(k!=a)
    {
        num++;
        int temp=num;
        int sum=0;
        while(temp!=0)
        {
            int rem=temp%10;
            sum=sum+rem;
            temp=temp/10;
        }
        if(sum==10)
            k++;
    }
    printf("%d",num);


}

