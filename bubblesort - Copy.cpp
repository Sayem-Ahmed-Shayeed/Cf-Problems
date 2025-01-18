#include<bits/stdc++.h>
using namespace std;
void traversing(int v[],int n);
void searching(int v[],int n,int item);
void selection(int v[],int n,int item);
void selection(int v[],int n,int item);
void insertion(int v[],int n,int k,int item);  //most important for exam
void deletion(int v[],int n,int k);

int main()
{
    int n;
    cin>>n;
    int v[n];
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
   // traversing(v,n);
   int index;
   cout<<"Enter the index to push: ";
   cin>>index;
    int item;
    cout<<"Enter the item: ";
    cin>>item;
    //searching(v,n,item);
    //selection(v,n,item);
    //insertion(v,n,index,item);
    deletion(v,n,index);

}
void traversing(int v[],int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<v[i]<<" ";
    }
}
void searching(int v[],int n,int item)
{
    int flag=0;
    for(int i=0; i<n; i++)
    {
        if(item==v[i])
        {
            cout<<i<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0)
        cout<<"Item not found\n";
}
void selection(int v[],int n,int item)
{
    int cnt=0;
    for(int i=0; i<n; i++)
    {
        if(item==v[i])
            cnt++;
    }
    cout<<cnt<<endl;
}
void insertion(int v[],int n,int k,int item)
{
    int v2[n+1];
    for(int i=0;i<n ;i++)
    {
        if(i<k)
        {
            v2[i]=v[i];
        }
        else
        {
            v2[i+1]=v[i];
        }
    }
    v2[k]=item;
    traversing(v2,n+1);
}
void deletion(int  v[],int n,int k )
{
    int v2[n-1];
    for(int i=0;i<n-1;i++)
    {
        if(i<k)
        {
            v2[i]=v[i];
        }
        else
        {
            v2[i]=v[i+1];
        }
    }
    traversing(v2,n-1);
}
