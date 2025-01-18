#include <string>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string name;
        cin>>name;
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+2;j<n;j++)
            {
                if((name[i]==name[j]) && (name[i+1]==name[j+1]))
                {
                    cnt++;
                    break;
                }
            }
            if(cnt!=0)
                break;
        }
        if(cnt!=0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
}
