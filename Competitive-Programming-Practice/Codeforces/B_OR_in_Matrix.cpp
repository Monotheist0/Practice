#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fo(i, a, b) for (int i = a; i < b; i++)

void solve() {
    int m, n;
    cin >> m >> n;
    vector<vector<int>> B(m, vector<int>(n));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> B[i][j];
        }
    }
    vector<vector<int>> A(m, vector<int>(n, 1));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (B[i][j] == 0) {
                for (int k = 0; k < n; k++) {
                    A[i][k] = 0;
                }
                for (int k = 0; k < m; k++) {
                    A[k][j] = 0;
                }
            }
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            int val = 0;
            for (int k = 0; k < n; k++) {
                val |= A[i][k];
            }
            for (int k = 0; k < m; k++) {
                val |= A[k][j];
            }
            if (val != B[i][j]) {
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "YES" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (j == n - 1)
                cout << A[i][j] << "";
            else
                cout << A[i][j] << " ";
        }
        cout << endl;
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