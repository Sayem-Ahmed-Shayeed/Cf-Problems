#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        vector<int> prefixGcd(n);
        vector<int> suffixGcd(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        // Calculate prefix GCD
        prefixGcd[0] = a[0];
        for (int i = 1; i < n; i++) {
            prefixGcd[i] = gcd(prefixGcd[i - 1], a[i]);
        }

        // Calculate suffix GCD
        suffixGcd[n - 1] = a[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            suffixGcd[i] = gcd(suffixGcd[i + 1], a[i]);
        }

        long long result = 0;

        // Calculate the sum of f(ai, aj, ak)
        for (int j = 1; j < n - 1; j++) {
            result += gcd(prefixGcd[j - 1], suffixGcd[j + 1]);
        }

        cout << result << endl;
    }

    return 0;
}
