#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fo(i, a, b) for (int i = a; i < b; i++)

void solve() {
    vector<int> arr(3);
    cin >> arr[0] >> arr[1] >> arr[2];
    sort(all(arr));
    if (arr[2] != arr[1]) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
        cout << arr[2] << " " << arr[0] << " " << arr[0] << endl;
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