#include<stdio.h>
int main()
{
    int a, b, c ;
    int name[6];
    scanf("%d %d %d",&a,&b, &c);
    name[0]=a+b*c;
    name[1]=a*(b+c);
    name[2]=a*b*c;
    name[3]=(a+b)*c;
    name[4]=a+b+c;
    int large=name[0];
    for(int i=0;i<5;i++)
    {
        if (large<name[i])
            large=name[i];
        else
            large=large;
    }
    printf("%d",large);

}

