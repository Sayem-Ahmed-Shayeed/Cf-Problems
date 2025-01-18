#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        char name[51];
        scanf("%s", name);
        int d = strlen(name);
        int count = 0;

        if (d % 2 == 0)
        {
            for (int j = 0; j < d - 1; j++)
            {
                if (name[j] <= name[j + 1])
                {
                    count = count;
                }
                else
                {
                    count = count + 1;
                }
            }
        }

        if (count == 0 && d % 2 == 0)
        {
            printf("NO\n");
        }
        else if(count>0)
        {
            printf("YES\n");
            for (int i = 0; i < d; i++)
            {
                printf("(");
            }
            for (int i = 0; i < d; i++)
            {
                printf(")");
            }
            printf("\n");
        }
       else if(d%2!=0)
            {
                printf("YES\n");
                for(int i=0; i<d; i++)
                {
                    printf("()");
                }
                    printf("\n");
            }

    }
    return 0;
    }
