#include<stdio.h>
//#include<string.h>
int main()
{
    char a[101];
    char b[101];
    scanf("%s",a);
    scanf("%s",b);
    for(int i=0; i<strlen(a); i++)
    {
        a[i]=toupper(a[i]);
        b[i]=toupper(b[i]);
    }
    int d=strcmp(a,b);
        printf("%d",d);




    return 0;
}
