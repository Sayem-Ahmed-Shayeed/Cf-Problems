#include<Stdio.h>
int main()
{

        int a[5];
        for(int i=0;i<5;i++)
        {
            printf("Enter  the %dth number :",i);
            scanf("%d",&a[i]);

        }
        printf("\nOutput is:-\n");
          for(int i=0;i<5;i++)
        {
            printf("The %dth number is: %d\n",i,a[i]);
        }



    return 0;
}
