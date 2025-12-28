#include <bits/stdc++.h>

using namespace std;

class DSU {
private:
    vector<int> sz;
    vector<int> parent;
    int num_com;
    int max_size;

public:
    DSU(int n) {
        sz.assign(n + 1, 1);
        iota(parent.begin(), parent.end(), 0);
        num_com = n;
        max_size = 1;
    }
    int find(int i) {
        if (parent[i] == i) {
            return i;
        }
        return parent[i] = find(parent[i]);
    }

    void unite(int a, int b) {
        int root_i = find(a);
        int root_j = find(b);
        if (root_i != root_j) {
            if (sz[root_i] < sz[root_j]) {
                swap(root_i, root_j);
            }
            parent[root_j] = root_i;
            num_com--;
            sz[root_i] += sz[root_j];
            if (sz[root_i] > max_size) {
                max_size = sz[root_i];
            }
        }
    }
};
