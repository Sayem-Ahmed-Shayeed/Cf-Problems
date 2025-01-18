#include <bits/stdc++.h>
#define ll long long int
using namespace std;
bool equalFrequency(string s)
{
    map<char, int> m;
    for (auto it : s)
    {
        m[it]++;
    }
    vector<int> v;
    for (auto it : s)
    {
        v.push_back(m[it]);
    }
    int cnt = 0;
    for (auto it : v)
    {
        if (it > 1)
        {
            cnt++;
        }
    }
    if (cnt == 0)
    {
        return true;
    }
    set<int> ss;
    for (auto it : v)
    {
        ss.insert(it);
    }
    vector<int> v2;
    for (int i : ss)
    {
        v2.push_back(i);
    }
    for (auto it : v2)
    {
        cout << it << ' ';
    }
}
int main()
{
    equalFrequency("aaccc");
}
