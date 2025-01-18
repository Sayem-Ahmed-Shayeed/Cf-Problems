#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char name[n+1][n+1];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i%2!=0)
            {
                if(j%2==0)
                {
                    name[i][j]='W';
                }
                else
                    name[i][j]='R';
            }
            else if(i%2==0)
            {
                name[i][j]='W';
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<name[i][j];
        }
        cout<<"\n";
    }
}
