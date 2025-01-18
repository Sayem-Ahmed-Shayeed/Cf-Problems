#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int name[n];
        for(int i=1; i<=n; i++)
        {
            scanf("%d",&name[i]);
        }
        int max=0;
        for(int k=1; k<=n; k++)
        {
            int score=0;
            int tempo=n;
            for(int i=k; i<=tempo; i++)
            {
                if(i%2==0)
                    score=score;
                else
                    score+=name[i];
                for(int j=i; j<=tempo; j++)
                {
                    int temp=name[j];
                    name[j]=name[j+1];
                    name[j+1]=temp;
                }
                tempo--;
            }
            printf("%d\n",score);
            if(max<score)
                max=score;
            else
                max=max;
        }

    }
}
