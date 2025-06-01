#!/usr/bin/env python3
import sys
import subprocess
from print_board import print_nice_board

def board_to_array(board):
    arr = []
    for line in board.strip().split('\n'):
        row = line.split()
        arr.append(list(map(lambda v: int(v), row)))
    return arr


if __name__ == "__main__":
    if len(sys.argv) != 2:
        print ("Usage: python3 test.py 'view portion' ''")
        sys.exit(0)
    view_portion = sys.argv[1]
    result = subprocess.run(f'./rush-01 "{view_portion}"', shell=True, check=True, capture_output=True, encoding='utf-8')
    board_arr = board_to_array(result.stdout)
    print_nice_board(board_arr, view_portion.split())