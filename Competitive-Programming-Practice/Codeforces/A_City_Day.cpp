#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fo(i, a, b) for (int i = a; i < b; i++)

void solve() {
    ll n, x, y;
    cin >> n >> x >> y;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        bool real = true;
        for (int j = 1; j <= x; j++) {
            if (i - j >= 0) {
                if (arr[i] > arr[i - j]) {
                    real = false;
                    break;
                }
            }
        }
        for (int j = 1; j <= y; j++) {
            if (i + j < n) {
                if (arr[i] > arr[i + j]) {
                    real = false;
                    break;
                }
            }
        }
        if (real) {
            cout << i + 1 << endl;
            return;
        }
    }
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