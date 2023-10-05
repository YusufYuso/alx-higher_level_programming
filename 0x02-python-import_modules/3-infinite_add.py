#!/usr/bin/python3
if __name__ == "__main__":
    import sys

    args = sys.argv[1:]
    count = 0
    for i in args:
        count = count + int(i)
    print("{}".format(count))
