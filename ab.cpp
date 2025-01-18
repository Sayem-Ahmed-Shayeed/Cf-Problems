#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int op = 0;

        for (int i = 0; i < n - 1; ++i)
        {
            if (s[i] == 'A' && s[i + 1] == 'B')
            {
                swap(s[i], s[i + 1]);
                ++op;
                ++i; // Skip the next index since it has already been processed
            }
        }
        cout << op << endl;
    }

    return 0;
}
