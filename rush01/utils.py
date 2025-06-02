import os
def board_to_array(board):
    arr = []
    for line in board.strip().split('\n'):
        row = line.split()
        arr.append(list(map(int, row)))
    return arr

def get_view_port(size: int, views: list[int], direction: str):
    """
    Extracts the view port for a specific direction from the views string.
    """
    # size = int(os.environ.get('TABLE_SIZE'))
    if direction == 'top':
        return views[0:size]
    elif direction == 'bottom':
        return views[size:size*2]
    elif direction == 'left':
        return views[size*2:size*3]
    elif direction == 'right':
        return views[size*3:size*4]
    else:
        raise ValueError("Invalid direction specified. Use 'top', 'bottom', 'left', or 'right'.")