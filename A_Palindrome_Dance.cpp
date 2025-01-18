/*_______________ H E A D E R S ______________*/
#include <bits/stdc++.h>
#include <stdio.h>
/*_______________ M A C R O S ______________*/
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define pb push_back
#define ll long long int
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define mx_ele(v) *max_element(v.begin(), v.end())
#define mnm_ele(v) *min_element(v.begin(), v.end())
#define endl "\n"
#define vint vector<int>
#define vll vector<long long int>
#define vstring vector<string>
#define pint vector<pair<int, int>>
#define pll vector<pair<ll, ll>>
#define fi first
#define se second
#define mp make_pair
#define Endl "\n"
#define nl "\n"
#define mod abs
using namespace std;
/* _________________ G C D _______________________
   E U C L I D I A N       T H E O R E M ________*/

ll gcd(ll a, ll b)
{
    while (b != 0)
    {
        ll temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

//              L  C  M

long long lcm(long long a, long long b)
{
    if (a == 0 || b == 0)
    {
        return 0;
    }
    return (a / gcd(a, b)) * b;
}

/* C O N V E R S I O N    T O     A N Y      N U M B E R    S Y S T E M            ________
      D E C I M A L       T O     A N Y       R A D I X   /   B A S E              ________*/

ll decimal_to_any(ll base, ll num)
{
    if (num == 0)
    {
        return 0;
    }

    long long result = 0;
    int power = 0;

    while (num > 0)
    {
        long long rem = num % base;
        result += rem * pow(10, power);
        num /= base;
        power++;
    }
    return result;
}

/* C O N V E R S I O N        T O              A N Y           N U M B E R          S Y S T E M     ________
        A N Y             N U M B E R       S Y S T E M            T O              D E C I M A L    _______*/

ll any_to_decimal(ll base, string s)
{
    reverse(all(s));
    ll ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        int digit = s[i] - '0';
        ans += (digit * pow(base, i));
    }
    return ans;
}

//  P O W E R   O F   T W O   O R   N O T   ??
bool power_of_two(ll n)
{
    if (n == 0)
        return false;
    return !(n & (n - 1));
}

//   P R I M E    O R    N O T              ??

bool isPrime(int n)
{
    for (int i = 2; i < n / 2; i++)
        if (n % i == 0)
            return 0;
    return 1;
}

//   D I G I T A L        R O O T S          !!

string digital_roots(string s)
{
    while (s.size() > 1)
    {
        int ans = 0;
        for (auto x : s)
        {
            ans += (x - '0');
        }
        s = to_string(ans);
    }
    return s;
}

// Prototype for cheems function
void cheems();

//   M A I N   F U N C T I O N              !!

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int _ = 1;
    // cin >> _;
    while (_--)
    {
        cheems();
    }
}

//    V O I D     C H E E M S              !!

void cheems()
{
    int n, w, b;
    cin >> n >> w >> b;
    vint v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    if (n % 2 == 1)
    {
    }
    int i = 0;
    int j = n - 1;
    int ans = 0;
    for (; i < n / 2 && j >= (n - n / 2); i++, j--)
    {
        if (v[i] != 2 and v[j] != 2)
        {
            if (v[i] == v[j])
            {
                continue;
            }
            else
            {
                cout << -1 << nl;
                return;
            }
        }
        else if (v[i] == 2 and v[j] == 2)
        {
            ans += 2 * (min(b, w));
        }
        else if ((v[i] == 2 or v[j] == 2 ) and(!(v[i] == 2 and v[j] == 2)))
        {
            if (v[i] != 2 and v[j] == 2)
            {
                if (v[i] == 0)
                {
                    ans += w;
                }
                else if (v[i] == 1)
                {
                    ans += b;
                }
            }
            else if (v[j] != 2 and v[i] == 2)
            {
                if (v[j] == 0)
                {
                    ans += w;
                }
                else if (v[j] == 1)
                {
                    ans += b;
                }
            }
        }
    }
    if (n % 2 == 1)
    {
        if ((v[n / 2]) == 2)
        {
            ans += min(b, w);
        }
    }
    cout << ans;
}
