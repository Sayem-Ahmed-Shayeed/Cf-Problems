#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int n;
        scanf("%d",&n);
        if(n==1)
            printf("0\n");
        else if(2<=n && n<6)
        {
            int temp;
            temp=n;
            int count=0;
            while(1)
            {
                temp*=2;
                count++;
                if(temp>=n)
                    break;
            }
            if(temp==6)
                printf("%d\n",count);
            else
                printf("-1\n");
        }
        else if(n>=6)
        {
            int count1=0;
            if(n%2!=0)
            {
                while(n<36)
                {
                    n=n*2;
                }
                count1++;
                while(n!=1)
                {
                    if(n%6==0)
                    {
                        n=n/6;
                        count1++;
                    }
                    if(n%6!=0)
                    {
                        count1=-1;
                        break;
                    }
                }
                printf("%d",count1);
            }
            /*else
            {
                int temp2=n;
                 while(1)
                {
                    if(temp2%6==0)
                    {
                        temp2=temp2/6;
                        count1++;
                    }
                    else if(temp2%6!=0)
                    {
                        printf("-1\n");
                        break;
                    }
                    else if(temp2==1)
                    {
                        printf("%d\n",count1);
                        break;
                    }
                }
            }
        }*/

    }
}


}
