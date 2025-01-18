#include<stdio.h>
int main()
{
    int a, b ;
    scanf("%d %d",&a, &b);
    switch(a<b)
    {
    case 0:
        switch(a==b)
        {
        case 1:
            printf("A and B is equal");
            break ;
        case 0:
            printf("A is larger than B ");
            break ;
        }
        break;
    case 1:
        printf("B is larger than A");
        break;

    }



    return 0;
}
