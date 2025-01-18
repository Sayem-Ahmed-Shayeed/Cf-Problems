#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
   for(int i=0;i<t;i++)
   {
       int count=0;
       long long int a;
       scanf("%lld",&a);
       int k;
       for(k=1;k<=a;k++)
       {
           count = (pow(k,2) +k ) /2 ;
           if(count==a)
           {
                printf("%d\n",k+1);
                break;
           }



       }
   }



    }

