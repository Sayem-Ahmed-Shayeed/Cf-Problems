#include <stdio.h>
#include<string.h>
#include<stdlib.h>
char name[100000][50];
char name1[100000][50];
int main()
{
    int n;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s", name[i]);
        strcpy(name1[i], name[i]);

    }


    for (int i =0; i < n; i++)
    {
        int d;
        int count=0;
        for(int j=i+1; j<n; j++)
        {
            d=strcmp(name[i],name[j]);
            if(d==0)
            {
                count++;
                sprintf(name[j], "%s%d", name[j], count);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        int d=strcmp(name1[i],name[i]);
        if(d==0)
            printf("OK\n");
        else
            printf("%s\n",name[i]);
    }





    return 0;
}
