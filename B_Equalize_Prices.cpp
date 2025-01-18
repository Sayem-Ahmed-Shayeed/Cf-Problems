/*_______________ H E A D E R S ______________*/
#include <bits/stdc++.h>
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
#define Endl endl
#define mod abs
using namespace std;
/* ____________________________ G C D _______________________
   __________ E U C L I D I A N       T H E O R E M ________*/

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

//___________________________   L  C  M   _____________________

long long lcm(long long a, long long b)
{
    if (a == 0 || b == 0)
    {
        return 0;
    }
    return (a / gcd(a, b)) * b;
}

/*______________________C O N V E R S I O N       T O     A N Y      N U M B E R    S Y S T E M            ________
  _________________        D E C I M A L          T O     A N Y       R A D I X   /   B A S E              _____________*/

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

/*__________    C O N V E R S I O N        T O              A N Y           N U M B E R          S Y S T E M     ________
  _____________________A N Y           N U M B E R       S Y S T E M            T O             D E C I M A L    ________*/

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

/*___________________________   "Check prime or not if "flag==true" then prime else not"   ______________________________*/

bool isPrime(ll num)
{
    bool flag = true;
    if (num < 2)
    {
        return false;
    }
    for (int i = 2; i < sqrt(num); i++)
    {
        if (num % i == 0)
        {
            flag = false;
            break;
        }
    }
    return flag;
}

//________________________  D I G I T A L        R O O T S   _______________________

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

//__________________________ M A I N   F U N C T I O N ________________________

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int _ = 1;
    cin >> _;
    while (_--)
    {
        cheems();
    }
}

//                                                   V O I D     C H E E M S

void cheems()
{
    int n;
    cin>>n;cout<<n<<endl;
}