#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int name[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&name[i]);
    }
    int cnt=0;
    int sum=0;
    int neg[n];
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(name[i]>name[j])
            {
                int temp=name[j];
                name[j]=name[i];
                name[i]=temp;
            }
        }
    }

        for(int i=0;i<m;i++)
        {
            if(name[i]<=0)
                sum+=name[i];
            else if(name[i]>0)
                sum+=0;
        }
        printf("%d",abs(sum));

}
