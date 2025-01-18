#include <bits/stdc++.h>
using namespace std;
int fibo(int n)
{
    if (n == 0 or n == 1)
    {
        return n;
    }

    int a = fibo(n - 1);
    int b = fibo(n - 2);
    int fib= a + b;

    return fib;
}
int main()
{
    int n;
    cin >> n;
    cout << fibo(n);
}