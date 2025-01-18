#include<iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        long long int candy[n];
        long long int org[n];
        long long int min_candy = 1000000000;
        long long int min_org = 1000000000;
        long long int cnt = 0;

        for (int i = 0; i < n; i++) {
            cin >> candy[i];
            if (candy[i] < min_candy)
                min_candy = candy[i];
        }

        for (int i = 0; i < n; i++) {
            cin >> org[i];
            if (org[i] < min_org)
                min_org = org[i];
        }

        for (int i = 0; i < n; i++) {
            cnt += max(candy[i] - min_candy, org[i] - min_org);
        }

        cout << cnt << endl;
    }
}

