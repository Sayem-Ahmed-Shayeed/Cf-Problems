#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, p;
    cin >> m >> p;
    int a[m][p];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            cin >> a[i][j];
        }
    }
    int n;
    cin >> n;
    int b[p][n];
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> b[i][j];
        }
    }
    int c[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            c[i][j] = 0;
            for (int k = 0; k < p; k++)
            {
                c[i][j] += b[k][j] * a[i][k]; // cba i,j ->k ,j ->i,k
                // mp ,pn, mn->abc
            }
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << c[i][j] << ' ';
        }
        cout << endl;
    }
}
