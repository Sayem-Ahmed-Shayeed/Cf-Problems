#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        if (n < m)
        {
            cout << "NO\n";
        }
        else if (n == m)
        {
            cout << "Yes\n";
        }
        else
        {
            int diff = n - m;
            if (diff % 2 == 0)
            {
                cout << "Yes\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }
}