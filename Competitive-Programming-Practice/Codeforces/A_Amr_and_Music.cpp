#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fo(i, a, b) for (int i = a; i < b; i++)

void solve() {
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> arr;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        arr.push_back({a, i + 1});
    }
    sort(all(arr));
    vector<int> rslt;
    for (int i = 0; i < n; i++) {
        if (k >= arr[i].first) {
            k -= arr[i].first;
            rslt.push_back(arr[i].second);
        } else {
            break;
        }
    }
    cout << rslt.size() << endl;
    for (int i = 0; i < rslt.size(); i++) {
        cout << rslt[i] << (i == rslt.size() - 1 ? "" : " ");
    }
    cout << endl;
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