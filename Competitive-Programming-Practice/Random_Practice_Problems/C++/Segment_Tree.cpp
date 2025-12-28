#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = numeric_limits<ll>::max();
vector<ll> a;
vector<ll> tree;
int N;

void build(int node_indx, int node_l, int node_r) {
    if (node_l == node_r) {
        if (node_l >= 0 && node_l < N) {
            tree[node_indx] = a[node_l];
        } else {
            tree[node_indx] = INF;
        }
    } else {
        int mid = node_l + (node_r - node_l) / 2;
        build(2 * node_indx, node_l, mid);
        build(2 * node_indx + 1, mid + 1, node_r);
        tree[node_indx] = min(tree[2 * node_indx], tree[2 * node_indx + 1]);
    }
};

void update(int node_indx, int node_l, int node_r, int pos, ll nval) {
    if (node_l == node_r) {
        tree[node_indx] = nval;
    } else {
        int mid = node_l + (node_r - node_l) / 2;
        if (pos <= mid) {
            update(2 * node_indx, node_l, mid, pos, nval);
        } else {
            update(2 * node_indx + 1, mid + 1, node_r, pos, nval);
        }
        tree[node_indx] = min(tree[2 * node_indx], tree[2 * node_indx + 1]);
    }
}

ll query(int node_indx, int node_l, int node_r, int q_l, int q_r) {
    if (q_l > node_r || q_r < node_l) {
        return INF;
    }
    if (q_l <= node_l && node_r <= q_r) {
        return tree[node_indx];
    }
    ll mid = node_l + (node_r - node_l) / 2;
    ll min_left = query(2 * node_indx, node_l, mid, q_l, q_r);
    ll min_right = query(2 * node_indx + 1, mid + 1, node_r, q_l, q_r);
    return min(min_left, min_right);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int q;
    cin >> N >> q;
    a.resize(N);
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }
    tree.resize(4 * N);
    build(1, 0, N - 1);
    for (int i = 0; i < q; i++) {
        int type;
        cin >> type;
        ll a, b;
        cin >> a >> b;
        if (type == 1) {
            update(1, 0, N - 1, a - 1, b);
        } else {
            ll result = query(1, 0, N - 1, a - 1, b - 1);
            cout << result << endl;
        }
    }
    return 0;
}