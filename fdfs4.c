#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int name[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&name[i]);
    }
    for(int i=0; i<pow(2,n); i++)
    {
            for(int j=0; j<n; j++)
            {
                int k=pow(2,j);
                if(k&i)
                {
                    printf("%d ",name[j]);

                }
            }
                 printf("\n");
        }
    }


