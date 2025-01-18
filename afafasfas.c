#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int n;
        scanf("%d",&n);
        int name[n][2];
        int m[n][2];
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<2;k++)
            {
                scanf("%d",&name[j][k]);
                m[j][k]=name[j][k];
            }
        }
        int large=0;
         for(int j=0;j<n;j++)
        {
            if(m[j][0]<=10 && m[j][1]>large)
                large=m[j][1];
            else
                large=large;
        }
        //
         for(int j=0;j<n;j++)
        {
                if(m[j][0]<=10 && m[j][1]==large)
                {int w=j+1;
                    printf("%d\n",w);}
        }

    }


    return 0;
}
