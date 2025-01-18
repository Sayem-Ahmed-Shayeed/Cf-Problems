
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int name[n][n];
    for(int i=1;i<2;i++)
    {
        for(int j=1;j<=n;j++)
        {
            name[i][j]=1;
        }
    }
    for(int i=2;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            int sum=0;
            for(int k=1;k<=j;k++)
            {
                sum+=name[i-1][k];
            }
            name[i][j]=sum;
        }
    }
    cout<<name[n][n];
}
