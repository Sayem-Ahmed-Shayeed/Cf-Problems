#include <bits/stdc++.h>
using namespace std;
 
const int MAX = 10000007;
vector<long long> primes;
vector<long long> segmentPrime;
 
void sieve()
{
    vector<bool> isPrime(MAX, true);
 
    isPrime[0] = false;
    isPrime[1] = false;
 
    for (long long i = 2; i * i <= MAX; ++i)
    {
        if (isPrime[i])
        {
            for (long long j = i * 2; j <= MAX; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
    for (int i = 1; i * i <= MAX; i++)
    {
        if (isPrime[i])
        {
            primes.push_back(i);
        }
    }
}
void segSieve(int l, int r)
{
    vector<bool> isPrime(r - l + 1, true);
    if (l == 1)
        isPrime[0] = false;
    for (long long i = 0; (primes[i] * primes[i]) <= r; ++i)
    {
        long long base = (l / primes[i]) * primes[i];
        if (base < l)
        {
            base += primes[i];
        }
        for (long long j = base; j <= r; j += primes[i])
        {
            isPrime[j - l] = false;
        }
        if (base == primes[i])
        {
            isPrime[base - l] = true;
        }
    }
 
    for (int i = 0; i < (r - l + 1); ++i)
    {
        if (isPrime[i])
        {
            segmentPrime.push_back(i + l);
        }
    }
    for (auto i : segmentPrime)
    {
        cout << i << "\n";
    }
    cout << endl;
}
int main()
{
    sieve();
 
    int tc;
    cin >> tc;
    while (tc--)
    {
        long long l, r;
        cin >> l >> r;
 
        segSieve(l, r);
 
        segmentPrime.clear();
        primes.clear();
    }
}