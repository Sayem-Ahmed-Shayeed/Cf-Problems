#include <bits/stdc++.h>
using namespace std;
/* _________________ G C D _______________________
   E U C L I D I A N       T H E O R E M ________*/

long long gcd(long long a, long long b)
{
    while (b != 0)
    {
        long long temp = b;
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

long long any_to_decimal(long long base, string s)
{
    reverse(s.begin(), s.end());
    long long ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        int digit = s[i] - '0';
        ans += (digit * pow(base, i));
    }
    return ans;
}

//  P O W E R   O F   T W O   O R   N O T   ??
bool power_of_two(long long n)
{
    if (n == 0)
        return false;
    return !(n & (n - 1));
}

//   P R I M E    O R    N O T              ??

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
    return true;
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

struct people
{
    string name;
    int a;
    int v;
    int s;
};

bool compare(const people &a, const people &b)
{
    if (a.a != b.a)
    {
        return a.a > b.a;
    }
    else if (a.v != b.v)
    {
        return a.v > b.v;
    }
    else if (a.s != b.s)
    {
        return a.s < b.s;
    }
    return a.name>b.name;
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
    int n;
    cin >> n;
    vector<people> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].name >> v[i].a >> v[i].v >> v[i].s;
    }
    sort(v.begin(), v.end(), compare);
    for (auto &x : v)
    {
        cout << x.name << endl;
    }
}
