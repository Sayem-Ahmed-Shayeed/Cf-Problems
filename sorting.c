#include<stdio.h>
#include<math.h>
int main()
{
    int  n, k, l, c, d, p, nl, np;
    int name[4];
    scanf("%d %d  %d %d %d  %d %d %d",&n,&k, &l,&c,&d,&p,&nl,&np);
    name[0]=(k*l)/nl;
    name[1]=c*d;
    name[2]=p/np;
     int small=name[0];
    for(int i=0;i<3;i++)
    {
        if(small>name[i])
        {
            small=name[i];
        }
        else
            small=small;
    }
    printf("%d",small/n);

    return 0;
}
