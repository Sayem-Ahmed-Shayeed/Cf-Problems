#include<stdio.h>
int main()
{

    int n;
    scanf("%d",&n);
    int ar[n];
    int count=0;
    int temp;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(int j=0;j<n;j++)
    {
        for(int k=j+1;k<n;k++)
        {
            if(ar[j]<ar[k])
            {
                temp=ar[j];
                ar[j]=ar[k];
                ar[k]=temp;
                count++;
            }
        }
    }

        printf("%d",count);

}
