#include <bits/stdc++.h>
using namespace std;

class DSU {
public:
    vector<int> parent;
    vector<int> sz;
    int num_comp;
    int max_size;
    DSU(int n) {
        parent.resize(n + 1);
        iota(parent.begin(), parent.end(), 0);
        sz.assign(n + 1, 1);
        num_comp = n;
        max_size = 1;
    }
    int find(int i) {
        if (parent[i] == i) {
            return i;
        }
        return parent[i] == find(parent[i]);
    }
    bool unite(int a, int b) {
        int root_i = find(a);
        int root_j = find(b);
        if (root_i != root_j) {
            if (root_i < root_j) {
                swap(root_i, root_j);
            }
            parent[root_j] = root_i;
            num_comp--;
            sz[root_i] += sz[root_j];
            max_size = max(max_size, sz[root_i]);
        }
    }
};

struct Query {
    int u, v, id;
};

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n, m, q;
    cin >> n >> m >> q;
    vector<pair<int, int>> roads(m);
    for (int i = 0; i < m; i++) {
        cin >> roads[i].first >> roads[i].second;
    }

    vector<Query> queries(q);
    for (int i = 0; i < q; i++) {
        cin >> queries[i].u >> queries[i].v;
        queries[i].id = i;
    }

    vector<int> q_low(q, 1);
    vector<int> q_high(q, m + 1);
    vector<int> results(q, -1);
    bool changed = true;
}