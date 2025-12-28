#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fo(i, a, b) for (int i = a; i < b; i++)

void solve() {
    ll n;
    cin >> n;
    ll a, b, c;
    c = 1;
    ll k = n - 1;
    if (k % 2 == 1) {
        a = 2;
        b = k - 2;
        cout << a << " " << b << " " << c << endl;
    } else {
        ll mid = k / 2;
        if (mid % 2 == 0) {
            a = mid - 1;
            b = mid + 1;
            cout << a << " " << b << " " << c << endl;
        } else {
            a = mid - 2;
            b = mid + 2;
            cout << a << " " << b << " " << c << endl;
        }
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