/*_______________ H E A D E R S ______________*/
#include <bits/stdc++.h>
#include <stdio.h>
#include <cmath>
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
#define PIE 3.141592653589793238462643383279
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

long long decimal_to_any(long long base, long long num)
{
    if (num == 0)
    {
        return 0;
    }
    long long result = 0;
    long long power = 1;
    while (num > 0)
    {
        long long rem = num % base;
        result += rem * power;
        num /= base;
        power *= 10;
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
    cin >> _;
    while (_--)
    {
        cheems();
    }
}

//    V O I D     C H E E M S              !!

void cheems()
{
    string s;
    cin >> s;
    int acnt = 0, bcnt = 0;
    bool aflag = false;
    bool bflag = false;
    for (int i = 0; i < s.size(); i++){
        if (s[i] == 'a'){
            if (bflag and bcnt > 0){
                if (bcnt < 2){
                    no;
                    return;
                }
                if (bcnt % 2 != 0 and bcnt % 3 != 0){
                    if ((bcnt - 2) % 3 != 0 and (bcnt - 3) % 2 != 0)
                    {
                        no;
                        return;
                    }
                }
                bcnt -= bcnt;
                bflag = 0;
            }
            if (!aflag){
                aflag = 1;
            }
            acnt++;
        }
        else{
            if (aflag and acnt > 0){
                if (acnt % 2 != 0 and acnt % 3 != 0){
                    if (acnt < 2){
                        no;
                        return;
                    }
                    if (acnt % 2 != 0 and acnt % 3 != 0){
                        if ((acnt - 2) % 3 != 0 and (acnt - 3) % 2 != 0)
                        {
                            no;
                            return;
                        }
                    }
                }
                acnt -= acnt;
                aflag = 0;
            }
            if (!bflag) {
                bflag = 1;
            }
            bcnt++;
        }
    }
    if (s[s.size() - 1] == 'a'){
        if (acnt < 2){
            no;
            return;
        }
        if (acnt % 2 == 0 or acnt % 3 == 0){
            yes;
            return;
        }
        if ((acnt - 2) % 3 == 0 or (acnt - 3) % 2 == 0){
            yes;
            return;
        }
    }
    if (s[s.size() - 1] == 'b'){
        if (bcnt < 2){
            no;
            return;
        }
        if (bcnt % 2 == 0 or bcnt % 3 == 0){
            yes;
            return;
        }
        if ((bcnt - 2) % 3 == 0 or (bcnt - 3) % 2 == 0){
            yes;
            return;
        }
    }
}