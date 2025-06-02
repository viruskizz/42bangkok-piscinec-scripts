#!/usr/bin/env python3
import sys
import os
import subprocess
import time
from print_board import print_nice_board, print_board
from utils import board_to_array
from validate_views import validate_views, validate_table_pattern, validate_result
from generator import get_possible_view, get_impossible_view

RED = "\033[91m"
REDD = "\033[31m"
GREEN = "\033[92m"
CYAN = "\033[96m"
MAGENTA = "\033[35m"
YELLOW_BOLD = "\033[1;33m"
RESET_COLOR = "\033[0m"

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

def test_success(args):
    """
    Tests the success of the output against the expected table.
    """
    print(f"{YELLOW_BOLD}--- Testing Success Case ---{RESET_COLOR}")
    executable = args.executable
    size = args.size
    for time in range(10):
        views, tbl = get_possible_view(size)
        try:
            views_str = " ".join(map(str, views))
            result = subprocess.run(f'{executable} "{views_str}"', shell=True, check=True, capture_output=True, encoding='utf-8')
            result = runner(executable, views)
            validate_result(size, result)
            board = board_to_array(result)
            validate_table_pattern(size, views, board)
            validate_views(views, board)
            print(f"{time}: {views_str}", end="\t")
            print(f"{GREEN}OK{RESET_COLOR}")
            if args.verbose:
                print(f"Output:")
                # print_nice_board(board, views)
                print_board(board)
        except subprocess.CalledProcessError as e:
            print(f"Process_Error - {e}")
            print("Output:", result.stdout.strip())
            print(f"{RED}--- CRASH ---{RESET_COLOR}")
        except Exception as e:
            print(f"{time}: {views_str}", end="\t")
            print(f"{RED}KO{RESET_COLOR}")
            print(f"{REDD}Exception - {e}{RESET_COLOR}")
            if args.verbose:
                print(f"{CYAN}Expected:{RESET_COLOR}")
                print_board(tbl)
                print(f"{CYAN}Output:{RESET_COLOR}")
                print(result)
                print("---------------------------")

def test_invalid(args):
    """
    Tests the invalid of the output against the expected table.
    """
    print(f"{YELLOW_BOLD}--- Testing Invalid Case ---{RESET_COLOR}")
    executable = args.executable
    cases = [
        ("3 2 1 2 1 2 3 2 3 2 2 1 2 1", "Few Numbers"),
        ("3 2 1 2 1 2 3 2 3 2 2 1 2 1 3 2 4", "Many Numbers"),
        ("3 2 a 2 b 2 3 2 3 2 2 1 2 1 3 2", "Alphabetic"),
        ("3 2 1 2 1 2 3 2 3 2 2 1 2 1 3 6", "Over Number"),
        ("3 2 1 2 1 2 3 2 3 2 2 1 2 1   3    2", "MId Spaces"),
        ("3 2 1 2 1 2 3 2 3 2 2 1 2 1 3 2   ", "End Spaces"),
        ("-1 1 2 3 4 2 3 1 1 3 2 1 3 4 2 1", "Negative"),
        ("3 2 1 2 1 2 3 0 3 2 2 0 2 1 3 2", "Zero Number"),
        ("1234512345123 1 2 3 4 2 3 1 1 3 2 1 3 4 2 1", "Overflow"),
    ]
    for idx, case in enumerate(cases):
        try:
            result = subprocess.run(f'{executable} "{case[0]}"', shell=True, check=True, capture_output=True, encoding='utf-8')
            output = result.stderr.strip() or result.stdout.strip()
            print(f"{idx + 1}: {case[1]}", end="\t")
            if output == "Error":
                print(f"{GREEN}OK{RESET_COLOR}")
            else:
                print(f"{RED}KO{RESET_COLOR}")
            if args.verbose:
                print(f"Input: {case[0]}")
                print(f"Output: {output}")
        except subprocess.CalledProcessError as e:
            print(f"Process_Error - {e}")
            print("Output:", e.stdout.strip())
        except Exception as e:
            print(f"Exception - {e}")
            print("Output:", result)
            print(f"{RED}Result: KO", RESET_COLOR)
