#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    char name[n+1];
    scanf("%s",name);
    int cnt=0;
    for(int i=0;i<n-2;i++)
    {
        if(name[i]=='x' && name[i+1]=='x' && name[i+2]=='x')
            cnt++;
    }
    printf("%d",cnt);
}
