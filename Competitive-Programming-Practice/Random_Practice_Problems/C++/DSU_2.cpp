#include <bits/stdc++.h>
using namespace std;

class DSU {
public:
    vector<int> sz;
    vector<int> parent;
    int num_comp;
    int max_size;
    DSU(int n) {
        sz.assign(n + 1, 1);
        parent.resize(n + 1);
        iota(parent.begin(), parent.end(), 0);
        num_comp = n;
        max_size = 1;
    }
    int find(int i) {
        if (parent[i] == i)
            return i;
        return parent[i] = find(parent[i]);
    }
    bool unite(int i, int j) {
        int root_i = find(i);
        int root_j = find(j);
        if (root_i != root_j) {
            if (sz[root_i] < sz[root_j]) {
                swap(root_i, root_j);
            }
            parent[root_j] = root_i;
            sz[root_i] += sz[root_j];
            max_size = max(max_size, sz[root_i]);
            num_comp--;
            return true;
        }
        return false;
    }
};

int main() {
    freopen("closing.in", "r", stdin); // EITAR KARONE ACCEPT HOCCHILO NA? INSAne
    freopen("closing.out", "w", stdout); // WHAT IS THIS????
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    vector<int> cls_order(n);
    vector<vector<int>> connections(n + 1);
    vector<bool> is_open(n + 1, false);
    int open_bar_count = 0;
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        connections[v].push_back(u);
        connections[u].push_back(v);
    }
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        cls_order[i] = a;
    }
    DSU dsu(n);
    vector<string> ans(n);
    for (int i = n - 1; i >= 0; i--) {
        int barn_to_open = cls_order[i];
        is_open[barn_to_open] = true;
        open_bar_count++;
        for (int neighbour : connections[barn_to_open]) {
            if (is_open[neighbour] == true) {
                dsu.unite(neighbour, barn_to_open);
            }
        }
        int closed_barns = n - open_bar_count;
        if (open_bar_count <= 1 || dsu.num_comp - closed_barns == 1) {
            ans[i] = "YES";
        } else {
            ans[i] = "NO";
        }
    }
    for (int i = 0; i < n; i++) {
        cout << ans[i] << endl;
    }
}