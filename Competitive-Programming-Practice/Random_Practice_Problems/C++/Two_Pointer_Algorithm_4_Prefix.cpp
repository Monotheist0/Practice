#include <bits/stdc++.h>

using namespace std;
int main() {
    long long n;
    cin >> n;
    vector<long long> a(n);
    for (long long i = 0; i < n; i++) {
        cin >> a[i];
    }
    long long total = accumulate(a.begin(), a.end(), 0);
    if (total % 3 != 0) {
        cout << "0" << endl;
        return 0;
    }
    long long target_sum = total / 3;
    long long current_sum = 0;
    long long total_ways = 0;
    long long first_part = 0;

    for (long long i = 0; i < n - 1; i++) {
        current_sum += a[i];
        if (current_sum == 2 * target_sum) {
            total_ways += first_part;
        }
        if (current_sum == target_sum) {
            first_part++;
        }
    }
    cout << total_ways << endl;
    return 0;
}