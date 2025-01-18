#include<stdio.h>
#include<string.h>
int main()
{
    int i=0;
    char n='y';
    while(n=='y')
    {
        char n[10];
        printf("enter 1/2/3.\n>>y for Yes\n>>n for NO.\nOption:");
        scanf("%c",&n[i]);
        switch(n[i])
        {
        case '1':
            printf("ok\n");
            break;
        case '2':
            printf("NO\n");
            break;
        case '3':
            {
                exit(0);
            }
        case 'n':
            {
                exit(0);
            }
        }
        scanf("%c",&n);
        i++;
    }
    return 0;
}
