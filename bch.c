#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    for(int i=0; i<t; i++)
    {
        char name[3][3];
        for(int j=0; j<3; j++)
        {
            for(int k=0; k<3; k++)
            {
                scanf(" %c",&name[j][k]);
            }
        }
        for(int j=0; j<3; j++)
        {
            int d=0,e=0;
            for(int k=0; k<3; k++)
            {
                d=d+name[j][k];
                e+=name[k][j];
            }
            if(e/3==name[0][j] && d/3==name[j][0])
            {
                printf("DRAW\n");
                break;
            }

            else
            {
                if(d/3==name[j][0])
                {
                    if(name[j][0]=='.')
                        printf("DRAW\n");
                    else
                        printf("%c\n",name[j][0]);
                        break;
                }
                else  if(e/3==name[0][j])
                {
                    if(name[0][j]=='.')
                        printf("DRAW\n");
                    else
                        printf("%c\n",name[0][j]);
                        break;
                }
            }
        }
        int f=name[0][0]+name[1][1]+name[2][2];
        int g=name[0][2]+name[1][1]+name[2][0];
        if(f/3==name[0][0] && g/3==name[0][2])
           {
               printf("DRAW\n");
               break;
           }

        else
        {
            if(f/3==name[0][0])
            {
                if(name[0][0]=='.')
                    printf("DRAW\n");
                else
                    printf("%c\n",name[0][0]);
                    break;
            }
            else if(g/3==name[0][2])
            {
                if(name[0][2]=='.')
                    printf("DRAW\n");
                else
                    printf("%c\n",name[0][2]);
                    break;
            }
        }





    }





    return 0;
}
