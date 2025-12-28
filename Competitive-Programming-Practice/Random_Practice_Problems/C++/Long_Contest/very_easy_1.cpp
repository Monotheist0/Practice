#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int rn = 0;
        while (n > 0) {
            int ld = n % 10;
            rn     = rn * 10 + ld;
            n      = n / 10;
        }
        cout << rn << endl;
    }
}