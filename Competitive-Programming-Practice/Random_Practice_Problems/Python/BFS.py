from collections import deque
def bfs(graph, start_node):
    visited = set()
    queue = deque([start_node])
    visited.add(start_node)
    while queue:
        node = queue.popleft()
        print(f"BFS Explroation: {node}")
        for neighbour in graph.get(node, []):
            if neighbour not in visited:
                queue.append(neighbour)
                visited.add(neighbour)
    

graph = {
    '1':['2','4'],
    '2':['3','5'],
    '3':['6','4'],
    '5':['7','3','2']
}

bfs(graph, '1')
