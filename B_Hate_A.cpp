#include <bits/stdc++.h>
using namespace std;

#define i64 long long
#define i32 int
#define str string
#define v vector
#define vi vector<int>
#define vll vector<long long int>
#define vstr vector<str>
#define pb push_back
#define eb emplace_back
#define nl '\n'

#define PI 3.14159265359
int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin >> s;
    int n = s.size();
    string build;
    bool flag = 0;
    string front;
    for (int i = 0; i < n; i++)
    {
        front += s[i];
        if (s[i] != 'a')
        {
            build += s[i];
        }
        if (build.size() == n - i - 1)
        {
            string temp = "";
            for (int j = i + 1; j < n; j++)
            {
                temp += s[j];
            }
            //cout << build << ' ' << temp << endl;
            if (temp == build)
            {
                flag = 1;
                cout << front;
                break;
            }
        }
    }
    if (flag != 1)
        cout << ":(";
}
