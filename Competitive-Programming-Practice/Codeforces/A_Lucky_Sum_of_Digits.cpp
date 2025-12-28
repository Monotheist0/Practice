#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fo(i, a, b) for (int i = a; i < b; i++)

void solve() {
    int n;
    cin >> n;
    int sev = n / 7;
    for (int i = sev; i >= 0; i--) {
        int remainder = n - (i * 7);
        if (remainder % 4 == 0) {
            int fours = remainder / 4;
            for (int j = 0; j < fours; j++)
                cout << 4;
            for (int j = 0; j < i; j++)
                cout << 7;
            cout << endl;
            return;
        }
    }
    cout << -1 << endl;
    return;
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