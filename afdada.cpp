#include<bits/stdc++.h>
using namespace std;

double dist(double x1, double y1, double x2, double y2) {
    return sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
}

void solve() {
    double px, py, ax, ay, bx, by;
    cin >> px >> py >> ax >> ay >> bx >> by;

    double d1 = dist(0, 0, ax, ay) + dist(ax, ay, px, py);
    double d2 = dist(0, 0, bx, by) + dist(bx, by, px, py);
    double d3 = dist(0, 0, ax, ay) + dist(ax, ay, bx, by) + dist(bx, by, px, py);
    double d4 = dist(0, 0, bx, by) + dist(bx, by, ax, ay) + dist(ax, ay, px, py);

    cout << fixed << setprecision(10) << min({d1,d2,d3,d4})/2 << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}
