import os
from utils import get_view_port

def _validate_views_top(views: list[int], board: list[list[int]]) -> bool:
    """
    Validates the top view against the board configuration.
    """
    top_view = get_view_port(views, 'top')
    size = len(board)
    for j in range(size):
        max_height = 0
        visible_count = 0
        for i in range(size):
            if board[i][j] > max_height:
                max_height = board[i][j]
                visible_count += 1
        if visible_count != top_view[j]:
            return False
    return True

def _validate_views_bottom(views: list[int], board: list[list[int]]) -> bool:
    """
    Validates the bottom view against the board configuration.
    """
    bottom_view = get_view_port(views, 'bottom')
    size = len(board)
    for j in range(size):
        max_height = 0
        visible_count = 0
        # Create reverse range for bottom view
        for i in range(size - 1, -1, -1):
            if board[i][j] > max_height:
                max_height = board[i][j]
                visible_count += 1
        if visible_count != bottom_view[j]:
            return False
    return True

def _validate_views_left(views: list[int], board: list[list[int]]) -> bool:
    """
    Validates the left view against the board configuration.
    """
    left_view = get_view_port(views, 'left')
    size = len(board)
    for i in range(size):
        max_height = 0
        visible_count = 0
        for j in range(size):
            if board[i][j] > max_height:
                max_height = board[i][j]
                visible_count += 1
        if visible_count != left_view[i]:
            return False
    return True

def _validate_views_right(views: list[int], board: list[list[int]]) -> bool:
    """
    Validates the right view against the board configuration.
    """
    right_view = get_view_port(views, 'right')
    size = len(board)
    for i in range(size):
        max_height = 0
        visible_count = 0
        for j in range(size - 1, -1, -1):
            if board[i][j] > max_height:
                max_height = board[i][j]
                visible_count += 1
        if visible_count != right_view[i]:
            return False
    return True

def validate_views(views: list[int], board: list[list[int]]) -> bool:
    """
    Validates the views against the board configuration.
    """
    if _validate_views_top(views, board) is False:
        raise Exception("VIEW ERROR: Top view does not match the board configuration.")
    if _validate_views_bottom(views, board) is False:
        raise Exception("VIEW ERROR: Bottom view does not match the board configuration.")
    if _validate_views_left(views, board) is False:
        raise Exception("VIEW ERROR: Left view does not match the board configuration.")
    if _validate_views_right(views, board) is False:
        raise Exception("VIEW ERROR: Right view does not match the board configuration.")
    return True

def validate_table_pattern(views: list[int], board: list[list[int]]) -> bool:
    """
    Validates the table pattern against the views.
    """
    size = int(os.environ.get('TABLE_SIZE'))
    if len(views) != size * 4:
        raise Exception("VIEWS ERROR: Views length does not match the expected size.")
    if len(board) != size or any(len(row) != size for row in board):
        raise Exception("BOARD ERROR: Board size does not match the expected size.")
    for row in board:
        for cell in row:
            if (cell < 1 or cell > size):
                raise Exception("BOARD ERROR: Board contains invalid values.")
    return True

def validate_result(size: int, result: str) -> bool:
    """
    Validates the result by checking the views and the board configuration.
    """
    for line in result.strip().split('\n'):
        if not line.strip():
            continue
        cells = line.split()
        for cell in cells:
            if not cell.isdigit():
                raise ValueError(f"BOARD ERROR: value of cell is not a digit.")
    return True
