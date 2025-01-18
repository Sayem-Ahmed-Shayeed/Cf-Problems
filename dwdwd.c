#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0; i<t; i++)
    {
        int n;
        scanf("%d",&n);
        int name[n];
        for(int j=0; j<n; j++)
        {
            scanf("%d",&name[j]);
        }
        int temp;
        int large=0;
        int count=0;
        for(int j=0; j<n-1; j++)
        {
            if(name[j]>name[j+1])
            {
                count++;
                if(large<name[j])
                    large=name[j];
                else
                    large=large;
            }
        }

            if(count==0)
            {
                printf("0\n");
            }
            else
                printf("%d\n",large);

        }
    }


