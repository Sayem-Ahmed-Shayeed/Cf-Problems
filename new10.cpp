#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    int N = 8;
    v = {1, 10, 8, 5, 5, 10, 1, 8};
    int even = 0;
    int odd = 1;
    for (int i = 0; i < N; i++)
    {
        if (v[even] % 2 != 0)
        {
            while (v[even] % 2 != 0)
            {
                swap(v[even], v[odd]);
                if (v[odd] % 2 == 1)
                {
                    odd += 2;
                }
                else
                {
                    break;
                }
            }
            even += 2;
        }
        else if (v[odd] % 2 != 1)
        {
            while (v[odd] % 2 != 1)
            {
                swap(v[even], v[odd]);
                if (v[even] % 2 == 0)
                {
                    even += 2;
                }
                else
                {
                    break;
                }
            }
            odd += 2;
        }
        else if (v[even] % 2 == 0)
        {
            even += 2;
        }
        else if (v[odd] % 2 == 1)
        {
            odd += 2;
        }
    }
    int flag = 1;
    for (int i = 0; i < v.size(); i++)
    {
        if ((v[i] % 2 == 0 and i % 2 == 0) or (v[i] % 2 == 1 and i % 2 == 1))
        {
            continue;
        }
        else
        {
            flag = 0;
            break;
        }
    }
    cout << flag << endl;
}