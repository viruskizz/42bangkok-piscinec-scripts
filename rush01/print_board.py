# top * 4, below * 4, left * 4, right * 4
def print_top_edge(views):
    print(" " * 3, " ".join(map(str, views[:4])))
    print("-" * 16)

def print_below_edge(views):
    print("-" * 16)
    print(" " * 3, " ".join(map(str, views[4:8])))

def print_left_edge(views, idx):
    print(views[8+idx:8+idx+1][0], end=" | ")

def print_right_edge(views, idx):
    print("| ", views[12+idx:12+idx+1][0], end="")

def print_nice_board(board, views):
    print_top_edge(views)
    for idx, row in enumerate(board):
        print_left_edge(views, idx)
        for col in row:
            print(col, end=" ")
        print_right_edge(views, idx)
        print()
    print_below_edge(views)
