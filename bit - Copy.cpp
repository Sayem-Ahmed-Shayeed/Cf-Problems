#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter two numbers :";
    int n1,n2;
    cin>>n1>>n2;
    if(n1>n2)
    {
        cout<<"n1 is greater than n2";
    }
    else if(n2>n1)
    {
        cout<<"n2 is greater than n1";
    }
    else
    {
        cout<<"They are equal";
    }
}

