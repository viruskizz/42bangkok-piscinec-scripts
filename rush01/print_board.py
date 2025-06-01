# top * 4, below * 4, left * 4, right * 4
def _print_top_edge(views):
    print(" " * 3, " ".join(map(str, views[:4])))
    print("-" * 16)

def _print_below_edge(views):
    print("-" * 16)
    print(" " * 3, " ".join(map(str, views[4:8])))

def _print_left_edge(views, idx):
    print(views[8+idx:8+idx+1][0], end=" | ")

def _print_right_edge(views, idx):
    print("| ", views[12+idx:12+idx+1][0], end="")

def print_nice_board(board, views):
    """
    Print the board with edges and views in a nice format.
    :param board: 2D list representing the board
    :param views: List of view counts for top, below, left, and right edges
    """
    _print_top_edge(views)
    for idx, row in enumerate(board):
        _print_left_edge(views, idx)
        for col in row:
            print(col, end=" ")
        _print_right_edge(views, idx)
        print()
    _print_below_edge(views)

def print_board(board: list[list[int]]) -> None:
    """
    Print the board in a simple format.
    :param board: 2D list representing the board
    """
    for row in board:
        for col in row:
            print(col, end=" ")
        print()