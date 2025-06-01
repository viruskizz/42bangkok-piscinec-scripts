#!/usr/bin/env python3
import sys
import os
import subprocess
from print_board import print_nice_board, print_board
from utils import board_to_array
from validate_views import validate_views, validate_table_pattern, validate_result
from generator import get_possible_view, get_impossible_view

def runner(executable, views: list[int]) -> str:
    """
    Runs the executable with the given view portion and returns the output.
    """
    views_str = " ".join(map(str, views))
    result = subprocess.run(f'{executable} "{views_str}"', shell=True, check=True, capture_output=True, encoding='utf-8')
    return result.stdout.strip()

def print_success(result, views):
    """
    Prints the result in a nice format.
    """
    if result == "Error":
        print("Error: Invalid input or no solution found.")
        return
    print("Running with views:", " ".join(map(str, views)))
    # print_nice_board(board, views)
RED = "\033[91m"
GREEN = "\033[92m"
CYAN = "\033[96m"
RESET_COLOR = "\033[0m"

if __name__ == "__main__":
    executable = "./rush-01"
    os.environ['TABLE_SIZE'] = '4'  # Set the table size to 4
    size = int(os.environ.get('TABLE_SIZE'))
    for time in range(10):
        views, tbl = get_possible_view(size)
        print(f"{CYAN}TIME {time + 1}:", RESET_COLOR, end="")
        print(" ".join(map(str, views)))
        try:
            result = runner(executable, views)
            validate_result(size, result)
            board = board_to_array(result)
            validate_table_pattern(views, board)
            validate_views(views, board)
            # print(f"Output: \n{result}")
            print(f"{GREEN}Result: OK", RESET_COLOR)
        except subprocess.CalledProcessError as e:
            print(f"Process_Error - {e}")
            print("Output:", result.stdout.strip())
        except Exception as e:
            print(f"Exception - {e}")
            print("Output:")
            print(result)
            print("Expected:")
            print_board(tbl)
            print(f"{RED}Result: KO", RESET_COLOR)
        except ValueError as e:
            print(f"ValueError - {e}")
        print("===========================")
        