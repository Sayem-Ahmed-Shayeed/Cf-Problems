#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i=0; i<n; i++)
            cin >> a[i];
        sort(a.begin(), a.end());
        long long sum = 0;
        for(int i=0; i<n; i++)
            sum += a[i];
        long long ans = sum;
        vector<long long> prefix_sum(n+1, 0);
        for(int i=0; i<n; i++)
            prefix_sum[i+1] = prefix_sum[i] + a[i];
        for(int k=1; k<n; k++) {
            int trucks = n / k;
            int rem = n % k;
            long long total = prefix_sum[n-rem] + (prefix_sum[n] - prefix_sum[n-rem]) * 2;
            ans = max(ans, total - sum);
        }
        cout << ans << "\n";
    }
    return 0;
}
