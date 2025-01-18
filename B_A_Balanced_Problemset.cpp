#include <bits/stdc++.h>
using namespace std;
int countAsterisks(string s)
{
    int ans = 0;
    int cnt = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '|')
        {
            cnt++;
            if (cnt % 2 == 0)
            {
                i++;
                while (s[i] != '|' and i < s.size())
                {
                    if (s[i] == '*')
                    {
                        ans++;
                    }
                    i++;
                }
                cnt++;
            }
        }
    }
    cout << ans << endl;
}
int main()
{
    countAsterisks("l|*e*et|c**o|*de|");
}
