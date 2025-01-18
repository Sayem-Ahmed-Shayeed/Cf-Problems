#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    getchar(); // Consume the newline character after reading 't'

    for (int i = 0; i < t; i++)
    {
        char name[3][3];
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                scanf(" %c", &name[j][k]);
            }
        }
        int d=name[0][0] + name[0][1] + name[0][2] ;
        int e=name[1][0] + name[1][1] + name[1][2] ;
        int f=name[2][0] + name[2][1] + name[2][2] ;
        //verticle
        int g=name[0][0] + name[1][0] + name[2][0] ;
          int h=name[0][1] + name[1][1] + name[2][1] ;
            int i=name[0][2] + name[1][2] + name[2][2] ;
            //cross now
        int j=name[0][0] + name[1][1] + name[2][2] ;
            int k=name[2][0] + name[1][1] + name[0][2] ;
        //for +
        if(d==129 || e==129 || f==129 || g==129 || h==129 || i==129 || j==129 || k==129)
            printf("+\n");
        else if(d==264|| e==264 || f==264 || g==264 || h==264 || i==264 || j==264 || k==264)
            printf("X\n");
        else if(d==237 || e==237 || f==237 || g==237 || h==237 || i==237 || j==237 || k==237)
            printf("O\n");
        else
            printf("DRAW\n");

    }
}










