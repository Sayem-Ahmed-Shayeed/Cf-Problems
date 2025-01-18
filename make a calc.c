#include<stdio.h>
int main()
{
    int marks;
    printf("Enter your marks: ");
    scanf("%d",&marks);
    switch(marks>=80 && marks<=100)
    {
    case 1:
        printf("A+");
        break;
    case 0:
        {
            switch(marks>=75 && marks<80)
            {
            case 1:
                printf("A");
                break;
            case 0:
                {
                    switch(marks>=70 && marks<75)
                    {
                    case 1:
                        printf("A-");
                        break;
                    case 0:
                        {
                            switch(marks>=65 && marks<70)
                            {
                            case 1:
                                printf("B+");
                                break;
                            case 0:
                                {
                                    switch(marks>=60 && marks<65)
                                    {
                                    case 1:
                                        printf("B");
                                        break;
                                    case 0:
                                        {
                                            switch(marks>=55 && marks<60)
                                            {
                                            case 1:
                                                printf("B-");
                                                break;
                                            case 0:
                                                {
                                                    switch(marks>=50 && marks<55)
                                                    {
                                                    case 1:
                                                        printf("C+");
                                                        break;
                                                    case 0:
                                                        {
                                                            switch(marks>=45 && marks<50)
                                                            {
                                                            case 1:
                                                                printf("C");
                                                                break;
                                                            case 0:
                                                                {
                                                                    switch(marks>=40 && marks<45)
                                                                    {
                                                                    case 1:
                                                                        printf("D");
                                                                        break;
                                                                    case 0:
                                                                        {
                                                                            switch(marks>=0 && marks<40)
                                                                            {
                                                                            case 1:
                                                                                printf("FAIL");
                                                                                break;
                                                                               default:
                                                                        {
                                                                            printf("out of range");
                                                                        }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }


                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                            }
                        }
                    }
                }
            }
        }

    }
    return 0;
}
