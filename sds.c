#include<stdio.h>
int main()
{
    int n,l,r,x;
    scanf("%d %d %d %d",&n,&l,&r,&x);
    int name[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&name[i]);
    }
    int i=0;
        for(int j=0; j<i+1; j++)
        {
            for(int k=i+1; k<n; k++)
            {
                printf("%d %d\n",name[i],name[k]);
            }
            i++;
        }


}
