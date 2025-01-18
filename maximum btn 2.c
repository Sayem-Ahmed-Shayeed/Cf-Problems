//check an bit is set or not.
#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n&1)
        printf("LSB set bit");
    else
        printf("LSB off bit");


}





