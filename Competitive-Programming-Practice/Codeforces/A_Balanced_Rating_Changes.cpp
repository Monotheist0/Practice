#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fo(i, a, b) for (int i = a; i < b; i++)

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int flag = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0 && flag == 0) {
            arr[i] = (arr[i] + 1) / 2;
            flag   = 1;
        } else if (arr[i] % 2 != 0 && flag == 1) {
            flag   = 0;
            arr[i] = (arr[i] - 1) / 2;
        } else {
            arr[i] = arr[i] / 2;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
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