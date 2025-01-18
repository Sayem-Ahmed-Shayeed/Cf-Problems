#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if((a==1) && (b>=2))
                cout<<1<<endl;
                else if((b==1) && (a>=2))
                    cout<<1<<endl;
                    else
            {
                if((a!=0) && (b!=0))
                    {
                        if(b==(a*10))
                            cout<<a<<endl;
                        else if(a==(b*10))
                            cout<<b<<endl;
                        else
                        {
                            cout<<((a+b)/3)<<endl;
                        }
                    }
                        else
                            cout<<0<<endl;
                    }
                }
    }

