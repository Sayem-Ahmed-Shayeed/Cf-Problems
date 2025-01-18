#include<stdio.h>
int main()
{
    int n;
    int count=0;
    scanf("%d",&n);
    int name[101];
    int arr[101];
    int temp;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&name[i]);
    }
       for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(name[i]<name[j])
            {
                temp=name[i];
                name[i]=name[j];
                name[j]=temp;
            }
        }
    }
    int sum=0;
     for(int i=0;i<n;i++)
    {
        sum=sum+name[i];
    }
    int s=0;
     for(int k=0;k<n;k++)
    {
        s=s+name[k];
        if(s>(sum-s))
        {
            printf("%d",k+1);
            break;
        }
    }













    return 0;
}
