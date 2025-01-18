#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define endl '\n'
#define PI 3.14159265359
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()

#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")

#define pow(x, n) ({                    \
    double result = exp(log(x) * n);    \
    result = round(result);             \
    static_cast<long long int>(result); \
})

#define JALDI__KAR__KAL__SUBHA__PANWEE__NIKALNA_HAIN \
    ios_base::sync_with_stdio(false);                \
    cin.tie(NULL);

template <typename data_type>
void print(char x, data_type a)
{
    cout << x << " : " << a << '\n';
}
template <typename T>
void reverse(T &v)
{
    int i = 0;
    int j = v.size();
    while (i < j)
    {
        swap(v[i++], v[j--]);
    }
}

template <typename data_type>
void printv(vector<data_type> &v)
{
    for (auto it : v)
        cout << it << ' ';
    cout << nl;
}
bool is_vowel(char c)
{
    if (c >= 65 and c <= 90)
        c += 32;
    if (c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u')
        return 1;
    return 0;
}
vector<bool> seive()
{
    int n = 1e5;
    vector<bool> prime(n + 1, true);
    prime[0] = prime[1] = false;
    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    return prime;
}
vector<long long> __seive(int N)
{
    const long long MAX_SIZE = 1e5 + 10;
    vector<long long> isprime(MAX_SIZE, true);
    vector<long long> prime;
    vector<long long> SPF(MAX_SIZE);
    isprime[0] = isprime[1] = false;
    for (long long int i = 2; i < N; i++)
    {
        if (isprime[i])
        {
            prime.push_back(i);
            SPF[i] = i;
        }
        for (long long int j = 0; j < (int)prime.size() and i * prime[j] < N and prime[j] <= SPF[i]; j++)
        {
            isprime[i * prime[j]] = false;
            SPF[i * prime[j]] = prime[j];
        }
    }
    return prime;
}
void solve();
int main()
{
    JALDI__KAR__KAL__SUBHA__PANWEE__NIKALNA_HAIN;
    vector<bool> prime = seive();
    vector<long long> prime2 = __seive(1e5);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
int isSubstring(string s1, string s2)
{
    if (s2.find(s1) != string::npos)
        return s2.find(s1);
    return -1;
}
void solve()
{
    int n, f, k;
    cin >> n >> f >> k;
    vector<int> v(n);
    // vector<pair<int, int>> mp(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        // mp[i] = {v[i], i};
    }
    int key = v[f - 1];
    int freq = 0;
    for (auto it : v)
    {
        if (it == key)
        {
            freq++;
        }
    }
    // sort(mp.begin(), mp.end(), greater<pair<int, int>>());
    // for (auto it : mp)
    // {
    //     cout << it.first << ' ' << it.second << endl;
    // }
    int low = k;
    int high = n - 1;
    bool fnd = false;
    sort(rall(v));
    int temp = 0;
    // cout << key << endl;
    for (int j = 0; j < k; j++)
    {
        if (v[j] == key)
        {
            temp++;
        }
    }
    for (int i = k; i < n; i++)
    {
        if (v[i] == key)
        {
            fnd = true;
            break;
        }
    }
    if (freq > 1)
    {
        if (fnd and temp > 0)
            cout << "MAYBE\n";
        else if (!fnd)
        {
            yes;
        }
        else
        {
            no;
        }
    }
    else if (freq < 2)
    {
        if (fnd)
        {
            no;
        }
        else
        {
            yes;
        }
    }
}