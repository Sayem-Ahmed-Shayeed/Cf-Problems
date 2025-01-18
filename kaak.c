#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int name[3];
    name[0]=abs(a-b)+abs(a-c);
    name[1]=abs(b-a)+abs(b-c);
    name[2]=abs(c-a)+abs(c-b);
    for(int i=0;i<3;i++)
    {
        if(name[0]>name[i])
        {
            name[0]=name[i];
        }
        else
        {
            name[0]=name[0];
        }
    }
    printf("%d",name[0]);








    return 0;
}
