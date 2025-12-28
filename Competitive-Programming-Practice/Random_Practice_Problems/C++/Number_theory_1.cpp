#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;
ll power(ll a, ll b) {
    int result = 1;
    while (b > 0) {
        if (b % 2 == 1) {
            result = result * a % MOD;
        }
        a = a * a % MOD;
        b /= 2;
    }
    return result;
}
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        ll a, b;
        cin >> a >> b;
        ll result = power(a, b);
        cout << result << endl;
    }
}