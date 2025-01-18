#include<stdio.h>
#include<string.h>
int main()

{
    char name='y';
    int i=0;

    do
    {
        if(name=='3')
        {
            break;
        }
        else
        {
            if(name[i]=='2')
            {
                printf("No");
            }
            else if(name[i]=='1');
            {
                printf("YES");
            }


        }
        i++;
        scanf("%c",&name);
    }while(name[i]=='y');





}
