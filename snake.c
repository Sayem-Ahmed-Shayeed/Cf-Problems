#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int count = 0;
    scanf("%d", &n);
    int name[n];

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
            scanf("%d", &name[i]);
        else if (i == 1)
        {
            scanf("%d", &name[i]);
            if (name[1] != name[0])
            {
                count++;
            }
        }
        else if (i >= 2)
        {
            int large=name[0];
            int small=name[0];
            for (int j = 0; j < i; j++)
            {
                if (large < name[j])
                    large = name[j];
                if (small > name[j])
                    small = name[j];
            }// Add newline character at the end
            scanf("%d", &name[i]);
            if(name[i]>large || name[i]<small)
                count++;
        }
    }
     printf("%d", count);

    return 0;
}
