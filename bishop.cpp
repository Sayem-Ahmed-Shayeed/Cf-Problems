#include<iostream>
#include<string.h>
#include<string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char name[9][9];
        int row[8];
        for(int i=0; i<8; i++)
        {
            int cnt=0;
            for(int j=0; j<8; j++)
            {
                cin>>name[i][j];
                if(name[i][j]=='#')
                    cnt++;
            }
            row[i]=cnt;
        }
        int ase;
       for(int i=0; i<8; i++)
        {
            if(row[i]==1 && row[i-1]==2 && row[i+1]==2 && i!=0 && i!=7)
                ase=i;
        }
        for(int i=ase;i<=ase;i++)
        {
            for(int j=0;j<8;j++)
            {
                if(name[i][j]=='#' && j!=0 && j!=7)
                {
                    cout<<ase+1<<" "<<j+1<<endl;
                    break;
                }
            }

        }
    }
}


