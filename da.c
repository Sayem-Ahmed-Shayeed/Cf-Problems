#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n,k;
        scanf("%d %d", &n,&k);
        int mid=k/2;
        if((n/2)%2==0 && k%2==0 && k%2==0)
        {
            int odd=1;
            int sum=0;
            for(int i=0;i<(n/2)-1;i++)
            {
                printf("%d ",odd);
                sum+=odd;
                odd+=2;
            }
            printf("%d ",mid-sum);
            int even=2;
            int sum1=0;
            for(int i=0;i<(n/2)-1;i++)
            {
                printf("%d ",even);
                sum1+=even;
                even+=2;
            }
              printf("%d ",mid-sum1);
              printf("\n");
        }
          if((n/2)%2!=0 && k%2!=0 && k%2==0)
        {
            int odd=1;
            int sum=0;
            for(int i=0;i<(n/2)-1;i++)
            {
                printf("%d ",odd);
                sum+=odd;
                odd+=2;
            }
            printf("%d ",(mid-1)-sum);
            int even=2;
            int sum1=0;
            for(int i=0;i<(n/2)-1;i++)
            {
                printf("%d ",even);
                sum1+=even;
                even+=2;
            }
              printf("%d ",(mid+2)-sum1);
              printf("\n");
        }
        if(n>=k)
            printf("-1\n");


    }
}
