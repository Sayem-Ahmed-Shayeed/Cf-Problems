#include<iostream>
using namespace std;
int multiplication(int t)
{
    while(t--)
    {
        int n;
    cin>>n;
    for(int i=1;i<=10;i++)
    {
        cout<<i<<"x"<<n<<"="<<i*n<<endl;
    }
    }

}
int main()
{
    int t;
    cin>>t;
    multiplication(t);
}
