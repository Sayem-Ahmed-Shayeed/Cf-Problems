#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   char name[101];
   char name1[101];
   scanf("%s %s",name,name1);
   int l=strlen(name);
   for(int i=0;i<l;i++)
   {
       if ((name[i]=='0') && (name1[i]=='1'))
       {
           printf("1");
       }
        else  if ((name[i]=='1') && (name1[i]=='0'))
            printf("1");
        else if ((name[i]=='0') && (name1[i]=='0'))
       {
           printf("0");
       }
        else  if ((name[i]=='1') && (name1[i]=='1'))
            printf("0");

   }
    return 0;
}
