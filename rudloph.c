#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0; i<t; i++)
    {
        int pos=1;
        int n,m,h;
        scanf("%d %d %d",&n,&m,&h);
        int count[n];//to keep the solved prob
        int baal[n];
        for(int j=0; j<n; j++)
        {
            int solved=0;//to count solved
            int name[m];
            int penalty[m];//to keep the penalty score
            for(int k=0; k<m; k++)
            {
                scanf(" %d",&name[k]);
            }
            for(int k=0; k<m; k++)
            {
                for(int q=k+1; q<m; q++)
                {
                    if(name[k]>name[q])
                    {
                        int temp=name[k];
                        name[k]=name[q];
                        name[q]=temp;
                    }
                }
            }
            int sum=0;
            for(int k=0; k<m; k++)
            {
                sum=sum+name[k];
                if(sum<=h)
                {
                    penalty[k]=sum;
                    solved++;
                }
            }
            count[j]=solved;
            int penalt=0;
            for(int p=0; p<solved; p++)
            {
                penalt=penalt+penalty[p];
            }
            baal[j]=penalt;
        }
        for(int j=1; j<n; j++)
        {
            if(count[j]>count[0])
            {
                pos++;
            }
            else if(count[j]==count[0])
            {
                if(baal[j]<baal[0])
                {
                    pos++;
                }
                else
                {
                    pos=pos;
                }
            }
        }
        printf("%d\n",pos);
    }
}


