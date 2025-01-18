#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long int a,b;
        int n;
        scanf("%lld %lld %d",&a,&b,&n);
        int name[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&name[i]);
        }
       /*for(int i=0;i<n;i++)
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
        }*/
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            int c;
            if(a<name[i])
            {
                c=b+a;
            }
            else
            {
                c=b+name[i];
            }
            if(c-1>a)
            {
                cnt+=a;
                     break;
            }
            else
            {
                cnt+=c-1;
                     b=1;
            }
        }
        printf("%d\n",cnt);
    }
    return 0;
}
