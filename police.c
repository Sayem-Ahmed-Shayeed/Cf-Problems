#include<stdio.h>
#include<math.h>
   unsigned long int last;
   unsigned long  int pos=0;
   unsigned long  int neg=0;
int main()
{
    unsigned long int n;
    scanf("%lu",&n);
    int name[n];
    for(int i=0;i<n;i++)
    {
        scanf("%lu",&name[i]);
    }
    for(int i=n-1;i>=0;i--)
    {
        if(name[i]<0)
        {
            last=i;
            break;
        }
    }
    int unt=0;
    for(int i=0;i<=last;i++)
    {
        if(name[i]>0)
            pos+=name[i];
        else if(name[i]<0)
        {
            if(pos>0)
            {
                unt+=0;
                pos=pos-1;
            }
            else
                unt++;
    }
    }
    printf("%lu",unt);
}
