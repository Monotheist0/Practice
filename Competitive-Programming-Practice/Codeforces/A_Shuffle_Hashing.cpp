#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fo(i, a, b) for (int i = a; i < b; i++)

void solve() {
    string p, h;
    cin >> p >> h;
    int n = p.length();
    int m = h.length();
    sort(p.begin(), p.end());
    for (int i = 0; i <= m - n; i++) {
        string sub = h.substr(i, n);
        sort(sub.begin(), sub.end());
        if (sub == p) {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}