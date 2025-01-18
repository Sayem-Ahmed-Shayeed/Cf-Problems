#include <bits/stdc++.h>
using namespace std;
void tower(int n, int beg, int aux, int end)
{
    if (n == 1)
    {
        cout << beg << "->" << end << endl;
    }
    tower(n - 1, beg, end, aux);
    tower(1, beg, aux, end);
    tower(n - 1, aux, beg, end);
}
int main()
{
    int n;
    cin >> n;
    tower(n, 0, 1, 2);
}

