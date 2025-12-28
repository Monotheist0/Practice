from collections import deque

def bfs(graph, start_node):
    visited = set()
    queue = deque([start_node])
    visited.add(start_node)
    
    print("BFS Path:")
    while queue:
        node = queue.popleft()
        print(node, end=" ")
        for neighbour in graph.get(node, []):
            if neighbour not in visited:
                visited.add(neighbour)
                queue.append(neighbour)
    print("\n") 


def dfs(graph, start_node):
    visited = set()
    stack = [start_node]
    
    print("DFS Path:")
    while stack:
        node = stack.pop()
        if node not in visited:
            visited.add(node)
            print(node, end=" ")
            for neighbour in reversed(graph.get(node, [])):
                if neighbour not in visited:
                    stack.append(neighbour)
    print("\n") 


def n_queen_solver(N):
    board = [[0]*N for _ in range(N)]
    
    if not solve_n_queen_util(board, 0, N):
        print("Solution does not exist")
        return False
    
    print(f"N-Queens Solution for N={N}:")
    for row in board:
        print(" ".join(map(str, row)))
    return True

def solve_n_queen_util(board, col, N):
    if col >= N:
        return True
    
    for i in range(N):

        if is_safe(board, i, col, N):
            board[i][col] = 1
            

            if solve_n_queen_util(board, col + 1, N):
                return True
            

            board[i][col] = 0
            
    return False

def is_safe(board, row, col, N):

    for i in range(col):
        if board[row][i] == 1:
            return False

    for i, j in zip(range(row, -1, -1), range(col, -1, -1)):
        if board[i][j] == 1:
            return False
            

    for i, j in zip(range(row, N, 1), range(col, -1, -1)):
        if board[i][j] == 1:
            return False
            
    return True

dhaka_graph = {
    'Shahbag': ['TSC', 'Farmgate'],
    'TSC': ['Nilkhet', 'Shahbag'],
    'Farmgate': ['Mohakhali', 'Shahbag'],
    'Nilkhet': ['TSC'],
    'Mohakhali': ['Farmgate']
}

bfs(dhaka_graph, 'Shahbag')
dfs(dhaka_graph, 'Shahbag')
n_queen_solver(4)