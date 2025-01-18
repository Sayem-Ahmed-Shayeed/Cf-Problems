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
//***********
#define PI 3.14159265359
using namespace std;
// This function "adds the digits until it reaches one digits / DIGITAL ROOTS"
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
void printv(vector<i64> &v)
{
    for (auto it : v)
    {
        cout << it << ' ';
    }
}
int firstMissingPositive(vector<int> &nums)
{
    int n = nums.size();
    for (int i = 0; i < n; ++i)
    {
        while (nums[i] > 0 && nums[i] <= n && nums[nums[i] - 1] != nums[i])
        {
            swap(nums[i], nums[nums[i] - 1]);
        }
    }
    for (int i = 0; i < n; ++i)
    {
        if (nums[i] != i + 1)
        {
            return i + 1;
        }
    }
    return n + 1;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int test_case = 1;
    // cin >> test_case;
    while (test_case--)
    {
        vector<int> v = {1,2,3};
        cout << firstMissingPositive(v);
    }
}
