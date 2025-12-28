#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fo(i, a, b) for (int i = a; i < b; i++)

void solve() {
int n;
string s;
cin >> n >> s;
int mx = -1;
for(auto i: s){
    int num = i - 'a' + 1;
    mx = max(mx,num);
}
cout << mx << endl; 
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