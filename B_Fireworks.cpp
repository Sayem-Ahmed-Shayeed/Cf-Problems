#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int addDigits(int num)
{
    while (num > 9)
    {
        int temp = 0;
        while (num != 0)
        {
            temp += (num % 10);
            num /= 10;
        }
        num = temp;
    }
    return num;
}
int main()
{
    cout<<addDigits(2345);
}
