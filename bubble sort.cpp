#include <bits/stdc++.h>
using namespace std;
void bubble_sort(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v.size() - i - 1; j++)
        {
            if (v[j] > v[j + 1])
            {
                swap(v[j], v[j + 1]);
            }
        }
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    bubble_sort(v);
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << ' ';
    }
}