#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fo(i, a, b) for (int i = a; i < b; i++)

void solve() {
    int h1, m1, h2, m2;
    char c;
    cin >> h1 >> c >> m1 >> h2 >> c >> m2;
    int h1_min = h1 * 60 + m1;
    int h2_min = h2 * 60 + m2;
    int h3, m3;
    h3 = ((h1_min + h2_min) / 2) / 60;
    m3 = ((h1_min + h2_min) / 2) % 60;
    printf("%02d:%02d\n", h3, m3);
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}