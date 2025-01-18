#include<stdio.h>
#include<math.h>
int main()
{
    while(1)
    {
        int a,b;
        int count=0;
        int min=0;
        scanf("%d %d",&a,&b);
        if(a==0 && b==0)
            break;
        int dragon[a];
        int night[b];
        for(int i=0;i<a;i++)
        {
            scanf("%d",&dragon[i]);
        }
        for(int j=0;j<b;j++)
        {
            scanf("%d",&night[j]);
        }
        if(a>b)
            printf("Loowater is doomed!\n");
        else
        {
             for(int i=0;i<a;i++)
        {
            for(int j=i+1;j<a;j++)
            {
                if(dragon[i]>dragon[j])
                {
                    int temp=dragon[i];
                    dragon[i]=dragon[j];
                    dragon[j]=temp;
                }
            }
        }
             for(int i=0;i<b;i++)
        {
            for(int j=i+1;j<b;j++)
            {
                if(night[i]>night[j])
                {
                    int temp=night[i];
                    night[i]=night[j];
                    night[j]=temp;
                }
            }
        }
        for(int i=0;i<a;i++)
        {
            for(int j=0;j<b;j++)
            {
                if(dragon[i]<=night[j])
                {
                    min=min+night[i];
                    count++;
                    break;
                }
            }
        }
        if(count==a)
        {
            printf("%d\n",min);
        }
        else
        printf("Loowater is doomed!\n");
        }
    }
}
