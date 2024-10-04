def print_board(board):
    for row in board:
        print(" | ".join(row))
        print("-" * 5)

def check_winner(board):
    # Check rows, columns, and diagonals
    for i in range(3):
        if board[i][0] == board[i][1] == board[i][2] != " ":
            return board[i][0]
        if board[0][i] == board[1][i] == board[2][i] != " ":
            return board[0][i]
    if board[0][0] == board[1][1] == board[2][2] != " ":
        return board[0][0]
    if board[0][2] == board[1][1] == board[2][0] != " ":
        return board[0][2]
    return None

def tic_tac_toe():
    board = [[" " for _ in range(3)] for _ in range(3)]
    current_player = "X"
    moves = 0
    winner = None

    print("Welcome to Tic-Tac-Toe!")
    print_board(board)

    while moves < 9 and not winner:
        try:
            row, col = map(int, input(f"Player {current_player}, enter your move (row and column): ").split())
            if board[row][col] == " ":
                board[row][col] = current_player
                moves += 1
                winner = check_winner(board)
                current_player = "O" if current_player == "X" else "X"
            else:
                print("The cell is already occupied. Try again.")
            print_board(board)
        except (ValueError, IndexError):
            print("Invalid input. Please enter row and column numbers between 0 and 2.")

    if winner:
        print(f"Congratulations! Player {winner} wins!")
    else:
        print("It's a tie!")

if __name__ == "__main__":
    tic_tac_toe()
