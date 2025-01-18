#include <bits/stdc++.h>
using namespace std;
int mySqrt(int x)
{
    int l = 0;
    int r = x;
    int mid = (l + r) / 2;
    while (l <= r)
    {
        int left = (mid - 1) * (mid - 1);
        //cout << left << " ";
        int m = mid * mid;
        //cout << m << endl;
        if (m == x)
        {
            return mid;
        }
        else if (left < x and x < m)
        {
            return mid - 1;
        }
        if (m > x)
        {
            r = mid - 1;
        }
        if (m < x)
        {
            l = mid + 1;
        }
        mid = (l + r) / 2;
    }
}
int main()
{
    cout << mySqrt(0);
}
// 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25