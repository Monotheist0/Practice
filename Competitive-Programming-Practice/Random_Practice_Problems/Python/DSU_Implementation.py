class DSU:
    def __init__(self, n):
        sz = [1]*n+1
        parent = list(range(n+1))
        num_com = n
        max_size = 1
    def find(self, i):
        if(self.parent[i] == i):
            return i
        self.parent[i] = self.find(self.parent[i])
        return self.parent[i]
    def unite(self, i , j):
        root_i = self.find(self.parent[i])
        root_j = self.find(self.parent[j])
        if(root_i != root_j):
            if(root_i > root_j):
                root_i, root_j = root_j, root_i
            self.parent(root_j) = root_i
            self.num_com -= 1
            self.sz[root_i] += self.sz[root_j]
            self.max_size = max(self.sz[root_i], self.max_size)
            