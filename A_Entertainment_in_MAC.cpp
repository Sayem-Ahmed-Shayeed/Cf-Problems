
#include <bits/stdc++.h>
//************
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
//***********
#define PI 3.14159265359
using namespace std;
// think of bitmasks
// think of sliding technique
// think of two pointer
//****
//  This function "adds the digits until it reaches one digits / DIGITAL ROOTS"
int addDigits(int num)
{
    while (num > 9)
    {
        int temp = 0;
        while (num != 0)
        {
            temp += (num % 10);
            num /= 10;
        }
        num = temp;
    }
    return num;
}
// power of two or not
bool poweroftwo(i64 n)
{
    if (n > 0 and (n & (n - 1)) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
// power of 4 or not
bool poweroffour(i64 n)
{
    if (poweroftwo(n) and n % 3 == 1 and n > 0)
    {
        return true;
    }
    return false;
}
// print a vector
void printv(vector<int> &v)
{
    for (auto it : v)
    {
        cout << it << ' ';
    }
}
// returns x^n in O(1) time
double pow(double x, long long n)
{
    bool neg = x < 0;
    if (neg)
    {
        x *= -1;
    }
    double result = exp(log(x) * n);
    if (neg and n & 1)
    {
        return -result;
    }
    return result;
}
bool power_of_any(int n, int x)
{
    // n is a power of x or n.
    // x^y=n or not?
    double temp = log10(n) / log10(x);
    return ((temp - (int)temp) == 0);
}
bool isvowel(char c)
{
    if (c >= 65 and c <= 90)
    {
        if (c == 'A' or c == 'E' or c == 'I' or c == 'O' or c == 'U')
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    if (c >= 97 and c <= 122)
    {
        if (c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u')
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    return false;
}

vector<bool> isprime(300010, 1);
// seive
void seive()
{
    isprime[0] = isprime[1] = false;
    for (int i = 4; i <= 300010; i += 2)
    {
        if (i <= isprime.size())
        {
            isprime[i] = false;
        }
    }

    for (int i = 3; i <= 300010; i += 2)
    {
        for (int j = 2 * i; j <= 300010; j += i)
        {
            if (j <= isprime.size())
            {
                isprime[j] = false;
            }
        }
    }
}
bool canBeIncreasing(vector<int> &nums)
{
    stack<int> st;
    int cnt = 0;
    int i = 0;
    while (i < nums.size())
    {
        if (st.empty())
        {
            cout << "empty stack : i is :" << i << endl;
            st.push(nums[i]);
            i++;
        }
        else
        {
            cout << "Else : \n";
            int top = st.top();
            cout << "top : " << top << endl;
            cout << "Nums[i]" << nums[i] << endl;
            if (top < nums[i])
            {
                st.push(nums[i]);
                i++;
            }
            else if (top >= nums[i])
            {
                while (!st.empty() and st.top() >= nums[i])
                {
                    st.pop();
                    cnt++;
                }
                st.push(nums[i]);
                i++;
            }
        }
    }
    cout << cnt << endl;
}
int compress(vector<char> &chars)
{
    int i = 0;
    int res = 0;
    int track = 0;
    while (i < chars.size())
    {
        char c = chars[i];
        int c_cnt = 0;
        while (i < chars.size() and c == chars[i])
        {
            c_cnt++;
            i++;
        }
        res += 1;
        chars[track++] = c;
        int temp = c_cnt;
        int digit = 0;
        while (temp > 0)
        {
            digit++;
            temp /= 10;
        }
        if (c_cnt > 1)
        {
            res += digit;
        }
        string num = to_string(c_cnt);
        // cout << reverse_number << endl;
        if (c_cnt > 1)
        {
            for (auto it : num)
            {
                chars[track++] = it;
            }
        }
    }
    // for (int i = 0; i < res; i++)
    // {
    //     cout << chars[i] << ' ';
    // }daa
    return res;
}
int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    long long t;
    cin >> t;
    while (t--)
    {
        string s;
        ci
    }
}