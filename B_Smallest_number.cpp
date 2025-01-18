
/*_______________ H E A D E R S ______________*/
#include <bits/stdc++.h>
#include <stdio.h>
#include <cmath>
/*_______________ M A C R O S ______________*/
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define pb push_back
#define ll long long
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
    // cin >> _;
    while (_--)
    {
        cheems();
    }
}

//    V O I D     C H E E M S              !!

void cheems()
{
    int m[4];
    for (int i = 0; i < 4; i++){
        cin >> m[i];
    }
    vector<char> op(3);
    for (int i = 0; i < 3; i++){
        cin >> op[i];
    }
    string it2 = "";
    it2 += (op[0]);  it2 += (op[1]);  it2 += (op[2]);
    vector<vector<int>> v;
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            for (int k = 0; k < 4; k++){
                for (int l = 0; l < 4; l++){
                    if (i != j and i != k and i != l and j != k and j != l and k != l){
                        vint v2 = {m[i], m[j], m[k], m[l]};
                        v.pb(v2);
                    }
                }
            }
        }
    }
    ll ans = LLONG_MAX;
    for (auto it : v)
    {
        ll one = it[0];   ll one1 = it[0];   ll one2 = it[0];
        ll two = it[1];   ll two1 = it[1];   ll two2 = it[1];
        ll three = it[2]; ll three1 = it[2]; ll three2 = it[2];
        ll four = it[3];  ll four1 = it[3];  ll four2 = it[3];
        if (it2[0] == '+'){
            two += one;
        }
        else{
            two *= one;
        }
        if (it2[1] == '+'){
            three += two;
        }
        else{
            three *= two;
        }
        if (it2[2] == '+'){
            ans = min(ans, three + four);
        }
        else{
            ans = min(ans, three * four);
        }
        if (it2[0] == '+'){
            three1 += one1;
        }
        else{
            three1 *= one1;
        }
        if (it2[1] == '+'){
            two1 += four1;
        }
        else{
            two1 *= four1;
        }
        if (it2[2] == '+'){
            ans = min(ans, two1 + three1);
        }
        else{
            ans = min(ans, two1 * three1);
        }
        if (it2[0] == '+'){
            four2 += one2;
        }
        else{
            four2 *= one2;
        }
        if (it2[1] == '+'){
            two2 += three2;
        }
        else{
            two2 *= three2;
        }
        if (it2[2] == '+'){
            ans = min(ans, two2 + four2);
        }
        else{
            ans = min(ans, two2 * four2);
        }
    }
    cout << ans << Endl;
}