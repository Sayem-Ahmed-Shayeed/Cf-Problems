#include<bits/stdc++.h>
using namespace std;
struct student
{
    int roll ;
    string name;
};
int main()
{
    struct student s[1]={{1,"sayem"}};
    for(int i=0;i<1;i++)
    {
        cout<<"the name of the "<<i+1<<"st student is:"<<s[i].name<<endl;
        cout<<"The roll of the"<<i+1<<"st student is: "<<s[i].roll<<endl;
    }
}
