#!/usr/bin/python3
if __name__ == "__main__":
    import sys

    args = sys.argv[1:]
    if len(args) == 0:
        print(".")
    elif len(args) == 1:
        print("{} argument:".format(len(args)))
        print("{}: {}".format(len(args), args[0]))
    else:
        print("{} arguments:".format(len(args)))
        for i, value in enumerate(args):
            print("{}: {}".format(i + 1, value))
