import os
import argparse
from test import test_success, test_invalid

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
    test_invalid(args)
    test_success(args)

if __name__ == "__main__":
    args = parse_arguments()
    print(args)
    os.environ['EXECUTABLE'] = args.executable
    os.environ['SIZE'] = str(args.size)
    main()