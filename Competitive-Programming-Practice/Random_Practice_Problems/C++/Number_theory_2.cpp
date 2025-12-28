#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fo(i, a, b) for (int i = a; i < b; i++)

void solve() {
    ll n, m;
    cin >> n >> m;
    ll p = 1;
    for (int i = 0; i < n; i++) {
        p = p * 2;
        if (p > m) {
            break;
        }
    }
    cout << m % p << endl;
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