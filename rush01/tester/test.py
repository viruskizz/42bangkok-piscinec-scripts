#!/usr/bin/env python3
import sys
import os
import subprocess
import time
from validate_views import validate_views, validate_table_pattern, validate_result
from generator import get_possible_view, get_impossible_view

RED = "\033[91m"
REDD = "\033[31m"
GREEN = "\033[92m"
CYAN = "\033[96m"
MAGENTA = "\033[35m"
YELLOW_BOLD = "\033[1;33m"
RESET_COLOR = "\033[0m"

def _board_to_array(board):
    arr = []
    for line in board.strip().split('\n'):
        row = line.split()
        arr.append(list(map(int, row)))
    return arr

def print_nice_board(board, views, size):
    print(" " * 3, " ".join(map(str, views[:size])))
    print("-" * 16)
    # Print top edge
    for idx, row in enumerate(board):
        print(views[size*2+idx:size*2+idx+1][0], end=" | ") # print left edge
        for col in row:
            print(col, end=" ")
        print("| ", views[size*3+idx:size*3+idx+1][0], end="") # print right edge
        print()
    # Print bottom edge
    print("-" * 16)
    print(" " * 3, " ".join(map(str, views[size:size*2])))

def print_board(board: list[list[int]]) -> None:
    for row in board:
        for col in row:
            print(col, end=" ")
        print()

def test_success(args):
    print(f"{YELLOW_BOLD}--- Testing Success Case ---{RESET_COLOR}")
    executable = args.executable
    size = args.size
    passed = 0
    failed = 0
    for time in range(10):
        views, tbl = get_possible_view(size)
        try:
            views_str = " ".join(map(str, views))
            result = subprocess.run(f'{executable} "{views_str}"', shell=True, check=True, capture_output=True, encoding='utf-8')
            result = result.stdout.strip()
            validate_result(size, result)
            board = _board_to_array(result)
            validate_table_pattern(size, views, board)
            validate_views(views, board)
            print(f"{time}: {views_str}", end="\t")
            print(f"{GREEN}OK{RESET_COLOR}")
            if args.verbose:
                print(f"Output:")
                if args.debug:
                    print_nice_board(board, views, size)
                else:
                    print_board(board)
            passed += 1
        except subprocess.CalledProcessError as e:
            print(f"Process_Error - {e}")
            print("Output:", result.stdout.strip())
            print(f"{RED}--- CRASH ---{RESET_COLOR}")
            failed += 1
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
            failed += 1
    return passed, failed

def test_invalid(args):
    print(f"{YELLOW_BOLD}--- Testing Invalid Case ---{RESET_COLOR}")
    executable = args.executable
    passed = 0
    failed = 0
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
            print(f"{idx}: {case[1]}", end="\t")
            if "Error" in output:
                print(f"{GREEN}OK{RESET_COLOR}")
            else:
                print(f"{RED}KO{RESET_COLOR}")
            if args.verbose:
                print(f"Input: {case[0]}")
                print(f"Output: {output}")
            passed += 1
        except subprocess.CalledProcessError as e:
            if e.stderr.strip() == "Error":
                print(f"{GREEN}OK{RESET_COLOR}")
                passed += 1
            else:
                print(f"Process_Error - {e}")
                print(f"{RED}--- CRASH ---{RESET_COLOR}")
                failed += 1
        except Exception as e:
            print(f"Exception - {e}")
            print(f"{RED}Result: KO", RESET_COLOR)
            if args.verbose:
                print("Output:", result)
            failed += 1
    return passed, failed

def test_impossible(args):
    print(f"{YELLOW_BOLD}--- Testing Impossible Case ---{RESET_COLOR}")
    executable = args.executable
    size = args.size
    passed = 0
    failed = 0
    for time in range(10):
        views = get_impossible_view(size)
        try:
            views_str = " ".join(map(str, views))
            result = subprocess.run(f'{executable} "{views_str}"', shell=True, check=True, capture_output=True, encoding='utf-8')
            output = result.stderr.strip() or result.stdout.strip()
            if "Error" in output:
                print(f"{time}: {views_str}", end="\t")
                print(f"{GREEN}OK{RESET_COLOR}")
                passed += 1
            else:
                print(f"{time}: {views_str}", end="\t")
                print(f"{RED}KO{RESET_COLOR}")
                if args.verbose:
                    print(f"{CYAN}Expected: Error{RESET_COLOR}")
                    print(f"{CYAN}Output: {output}{RESET_COLOR}")
                failed += 1
        except subprocess.CalledProcessError as e:
            print(f"Process_Error - {e}")
            print("Output:", e.stdout.strip())
            print(f"{RED}--- CRASH ---{RESET_COLOR}")
            failed += 1
        except Exception as e:
            print(f"Exception - {e}")
            print(f"{RED}Result: KO", RESET_COLOR)
            print("Output:", result)
            failed += 1
    return passed, failed