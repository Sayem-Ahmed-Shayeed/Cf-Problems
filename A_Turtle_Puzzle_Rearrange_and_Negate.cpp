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
/*          ->  HOW TO FIND THE NTH TERM OF SEQ <-  ??
Solution:
   ->    formula : a1+(nth-1)*diff;
here,
   >>    a1 is the first element of the seq
   >>    nth is the term we want to find
   >>    diff is the difference of the sq
*/

ll nth_term(ll start_of_seq, ll diff, ll nth)
{
    return start_of_seq + (nth - 1) * diff;
}

//                 G E T   A L L   T H E   P E R M U T A T I O N   O F   A  G I V E N   S T R I N G
//                                  RETURNS  A  VECTOR  OF  A  STRING

vector<string> possible_permutation(string s)
{
    sort(all(s));
    vstring v;
    do
    {
        v.pb(s);
    } while (next_permutation(all(s)));
    return v;
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
    if (n < 2)
        return 0;
    for (int i = 2; i * i < n; i++)
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
ll calc_trailing_zero(ll n)
{
    ll ans = 0;
    ll mul = 5;
    while (n >= mul)
    {
        ans += (n / mul);
        mul *= 5;
    }
    return ans;
}
// Bubble sort
/*
time complexity: O(N^2) [Quadratic]
space complexity: O(N) [Linear]
Total pass/steps: N-1
operation: (n*(n-1))/2;
the summation from 1-n is :n*(n+1)/2 and this is given by gauss's law.

void bubble_sort(int v[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        cout << "\nSteps no " << i + 1 << ":" << endl;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (v[j] > v[j + 1])
            {
                swap(v[j], v[j + 1]);
            }
            for (int k = 0; k < n; k++)
            {
                cout << v[k] << ' ';
            }
            cout << endl;
        }
    }
}

*/

// Binary search
/*
Pre_requisite: Sorting the array.
Time complexity : O(logN)
Space complexity: O(N)

int binary_search(int v[], int n, int key)
{
    sort(bubble_sort(v, n));
    int low = 0;
    int high = n - 1;
    int mid = (low + high) / 2;
    int ans = -1;
    while (low <= high)
    {
        if (v[mid] == key)
        {
            return mid;
        }
        else if (v[mid] > key)
        {
            high = mid - 1;
        }
        else if (v[mid] < key)
        {
            low = mid + 1;
        }
    }
    return -1;
}
*/

//   M A I N   F U N C T I O N              !!

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int _ = 1;
    cin >> _;
    for (int i = 1; i <= _; i++)
    {
        cheems();
    }
}

//    V O I D     C H E E M S              !!

void cheems()
{
    int n;
    cin >> n;
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        sum += abs(x);
    }
    cout << sum << endl;
}
