#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fo(i, a, b) for (int i = a; i < b; i++)

bool isPrime(ll n){
    if(n == 1) return false;
    if(n == 2) return true;
    if (n%2 == 0) return false;
    for(ll i = 3; i*i <= n;i+=2){
        if(n%i == 0)return false;
    }
    return true;
}

void solve() {

ll n;
cin >> n;
n = n+1;
while(true){
    if (isPrime(n)){
        cout << n << endl;
        break;
    }
    n++;
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