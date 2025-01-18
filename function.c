#include<stdio.h>
void solve()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;//sum+=i olan o lekhte paros same i kotha
    }
    printf("summ is  : %d",sum );
}
int main()
{
    solve();
}
