#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    for(int t = 1; t <= T; t++) {
        int n;
        cin >> n;
        vector<pair<int, int>> power_sources(n);
        for(int i = 0; i < n; i++) {
            cin >> power_sources[i].second >> power_sources[i].first;
        }
        sort(power_sources.rbegin(), power_sources.rend());
        long long ans = 0, cnt = 0, mx = power_sources[0].first;
        for(auto& p : power_sources) {
            if(p.first == mx) {
                ans += (long long)p.first * p.second;
                cnt += p.second;
            } else {
                ans += max((long long)p.first * p.second, cnt * mx);
                cnt += p.second;
                mx = min(mx, p.first);
            }
        }
        cout << "Case " << t << ": " << ans << "\n";
    }
    return 0;
}
