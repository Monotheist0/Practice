#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fo(i, a, b) for (int i = a; i < b; i++)

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int first = -1, last = -1;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            if (first == -1)
                first = i;
            last = i;
        }
    }
    if (first == -1) {
        cout << n << endl;
    } else {
        int left  = 2 * (last + 1);
        int right = 2 * (n - first);
        cout << max(left, right) << endl;
    }
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