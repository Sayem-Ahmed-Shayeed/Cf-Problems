#include<stdio.h>
int main()
{
    int year;
    scanf("%d",&year);
    ((year%400==0) || (year%4==0&& year%100!=0))?printf("LY"):printf("not leap year ");
}
