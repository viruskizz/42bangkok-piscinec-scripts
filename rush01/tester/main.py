import os
import argparse
from test import test_success, test_invalid, test_impossible

RED = "\033[91m"
GREEN = "\033[92m"
YELLOW_BOLD = "\033[1;33m"
RESET_COLOR = "\033[0m"

def parse_arguments():
    """
    Parses command line arguments for the rush01 tests.
    """
    parser = argparse.ArgumentParser(description="Run rush01 tests.")
    parser.add_argument('-e', '--executable', type=str, default='./rush01', help='Path to the rush01 executable.')
    parser.add_argument('-s', '--size', type=int, default=5, help='Size of the table to test.')
    parser.add_argument('-v', '--verbose', action='store_true', default=False, help='Enable verbose output.')
    parser.add_argument('-d', '--debug', action='store_true', default=False, help='Enable debug output.')
    return parser.parse_args()

def main():
    """
    Main function to run the rush01 tests.
    """
    total_passed = 0
    total_failed = 0
    passed, failed = test_invalid(args)
    total_passed += passed
    total_failed += failed
    passed, failed = test_success(args)
    total_passed += passed
    total_failed += failed
    passed, failed = test_impossible(args)
    total_passed += passed
    total_failed += failed
    print(f"{YELLOW_BOLD}--- Summary ---{RESET_COLOR}")
    print(f"{GREEN}PASSED: {total_passed}{RESET_COLOR}")
    print(f"{RED}FAILED: {total_failed}{RESET_COLOR}")

if __name__ == "__main__":
    args = parse_arguments()
    os.environ['EXECUTABLE'] = args.executable
    os.environ['SIZE'] = str(args.size)
    main()