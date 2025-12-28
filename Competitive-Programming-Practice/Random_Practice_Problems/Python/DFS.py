

def dfs(graph, start_node):
    visited = set()
    stack = [start_node]
    while(stack):
        node = stack.pop()
        if node not in visited:
            visited.add(node)
            print(f"{node}")
            for neighbour in reversed(graph.get(node,[])):
                if neighbour not in visited:
                    stack.append(neighbour)
            
            


dhaka_graph = {
    'Shahbag': ['TSC', 'Farmgate'],
    'TSC': ['Nilkhet', 'Shahbag'],
    'Farmgate': ['Mohakhali', 'Shahbag'],
    'Nilkhet': ['TSC'],
    'Mohakhali': ['Farmgate']
}
dfs(dhaka_graph, 'Shahbag')