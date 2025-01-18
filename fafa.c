#include<stdio.h>
int main()
{

    int a;
    printf("Enter the numbers of month :");
    scanf("%d",&a);
    switch(a)
    {
    case 31:
        printf("january \nmarch\nmay\njuly\naugust\noctober\ndecember");
        break;
     case 30:
        printf("February\napril\njune\nseptember\nnovember");
        break;
     default:
        printf("February");

    }
}

