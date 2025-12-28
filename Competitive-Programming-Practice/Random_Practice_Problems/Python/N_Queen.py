

def issafe(board, row, col, N):
    
    for i in range(col):
        if board[row][i] == 1:
            return False
    for i , j in  zip(range(row, -1, -1), (range(col, -1, -1))):
        if board[i][j] == 1:
            return False
    for i, j in zip(range(row, N, 1), range(col, -1, -1)):
        if(board[i][j] == 1):
            return False
    return True
        


def solve_queen(board, col, N):
    if col >= N:
        return True
    for i in range (N):
        if issafe(board,i,col,N):
            board[i][col] = 1
        if solve_queen(board,col+1,N):
            return True
        board[i][col] = 0
    
    return False
        
        
    
def n_queen(N):
    board = [[0]*N for _ in range (N)]
    
    if not solve_queen(board, 0, N):
        print("NO solution fk off")
        return False
    for row in board:
        print(" ".join(map(str,row)))
    return True
        





print ("Solution for N queen Problem: ")
n_queen(4)