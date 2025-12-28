#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fo(i, a, b) for (int i = a; i < b; i++)

void solve() {
    int n;
    cin >> n;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    long long total = 0;
    ll next         = INT_MAX;
    for (int i = n - 1; i >= 0; i--) {
        ll cur = min(next - 1, arr[i]);
        if (cur < 0)
            cur = 0;
        total += cur;
        next = cur;
    }
    cout << total << endl;
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