#include<stdio.h>
int main()
{

    int a;
    printf("enter the month number : ");
    scanf("%d",&a);
    switch(a)
    {
    case 31:
        printf("January\n");
      case 3:
        printf("March\n");
        case 5:
        printf("May\n");
     case 7:
        printf("July\n");
      case 8:
        printf("August\n");
      case 10:
        printf("october\n");
        case 12:
        printf("December\n");
        break;
    case 30:
        printf("April\n");
     case 6:
        printf("June\n");
      case 9:
        printf("september\n");
      case 11:
        printf("November\n");
        break;


     case 28:
        printf("February\v");
        break;
     case 29:
        printf("February\v");
        break;

    }
}

