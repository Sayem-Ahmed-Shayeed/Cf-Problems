#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int neg=0;
    int pos=0;
        int n;
        cin>>n;
        int name[n-1];
        for(int i=0;i<n-1;i++)
        {
            cin>> name[i];
        }
        for(int i=0;i<n-1;i++)
        {
            if(name[i]<0)
                neg+=abs(name[i]);
            else if(name[i]>=0)
                pos+=name[i];
        }
        cout<<neg-pos<<endl;
    }
}
